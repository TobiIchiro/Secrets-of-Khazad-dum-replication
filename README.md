# Moria Replication

## What Is This?

**The Lord of the Rings: Return to Moria** is a survival and building game set inside the Mines of Moria. Players take on the role of Dwarves returning to reclaim their ancient homeland -- exploring procedurally generated caves, gathering resources, building structures and fortifications, crafting weapons, brewing Dwarven beverages, and fighting off Orcs, Trolls, and other creatures.

This project takes the shipped game and works backward to recreate a working copy of the game's development environment. Think of it like taking a finished book and reconstructing the author's notebook -- not to copy the book, but to write new chapters that fit seamlessly into the story.

**Why does this matter?** The game uses a framework called FGK (Free-range Games Kit) that reads all of its configuration files at startup and locks them into a memory cache. These configuration files (called DataTables) define everything: what items exist, what can be built, what each building piece looks like, what resources are needed. Once the cache is sealed at startup, nothing new can be added.

This means traditional runtime mods (like the companion [MoriaAdvancedBuilder](https://github.com/jbowensii/MoriaAdvancedBuilder) project) can modify existing items but cannot add entirely new entries to the build menu. The FGK cache blocks them.

**The solution:** If new content is packaged the same way the game packages its own content (as cooked IoStore pak files), it gets loaded *before* the cache is built. The game treats it as original content. This is already proven by existing Moria mods (Secrets of Khazad-dum, TobiModsAddons). This project builds the editor environment needed to create, cook, and package that content.

For full details, see [`docs/Moria Replication Project Guide.docx`](docs/Moria%20Replication%20Project%20Guide.docx) -- an 11-chapter reference covering every step, tool, and script.

## Project Status -- v0.2.0

### What's Done

| Phase | Status | Description |
|-------|--------|-------------|
| 1. Tool Setup & Extraction | Done | FModel, retoc, KismetKompiler installed; 56,797 game assets extracted |
| 2. Editor Project Generation | Done | UE4.27 project compiles cleanly (9 game modules, 14 fix steps), editor opens |
| 3. Asset Import | Done | 26,139 assets imported into the editor project |
| 4. Blueprint Decompilation | Done | 4,406 Blueprints decompiled to readable .kms pseudocode |
| 5. Level Reconstruction | Done | 86 room layouts reconstructed from BubbleData (292,543 actors total) |

### What's Not Done

| Item | Notes |
|------|-------|
| Materials on meshes | Parent master materials (shader graphs) can't be reconstructed from cooked data -- meshes show as gray/white |
| Procedural cave geometry | Cave walls/ceilings are generated at runtime by the game's voxel system, not stored as files |
| Blueprint editing | Decompiled to pseudocode for reading, but visual graph data is stripped during cooking |
| Play in editor | No player character, no game mode configured -- levels are view-only |
| Cook and package mods | Editor compiles but cooking to IoStore paks has not been attempted |
| 7 bow/crossbow animations | Extra prop bones not in base Dwarf skeleton |
| 12 Troll AnimMontages | JsonAsAsset can't resolve `.6` object index skeleton references |

### Asset Import Breakdown

| Asset Type | Count | Method |
|-----------|-------|--------|
| Textures | 2,806 | JsonAsAsset + Cloud Server |
| Materials & Material Instances | ~3,000+ | JsonAsAsset + Cloud Server |
| Data Tables, Curves, Sound Data | ~5,500+ | JsonAsAsset + Cloud Server |
| Static Meshes | 2,027 | UModel > Blender > FBX > UE4 (100% coverage) |
| Skeletal + Destructible Meshes | 1,322 | Copied from cooked game files |
| Animations (FBX) | 4,018 | PSA > Blender FBX conversion > UE4 import |
| Animations (cooked) | 4 | Troll AnimSequences copied from cooked files |
| Blueprints (cooked, view-only) | 4,406 | retoc IoStore-to-legacy conversion |
| Level maps (.umap) | ~200+ | retoc IoStore-to-legacy conversion |
| **Total** | **26,139** | |

## What This Enables

| Capability | How |
|-----------|-----|
| New constructions in the build menu | DataTable rows in cooked pak, loaded before FGK cache |
| New items, weapons, tools | DataTable rows with asset references |
| Custom building piece meshes | Import/create in editor, cook to pak |
| Biome customization | Modify FZoneDefinition, UBiomeDecoConfig, lighting configs |
| Unique room fixes | Override .umap sublevel files |
| Custom UI widgets | Widget Blueprints in the UMG visual designer |
| New Blueprint actors | Full Blueprint creation referencing game classes |

## Quick Start

### Prerequisites
- **UE4.27 Editor** installed at `C:\Program Files\Epic Games\UE_4.27\`
- **Visual Studio 2022** with C++ game development workload
- **Python 3.10+** for automation scripts
- **Blender 3.x+** for mesh and animation conversion
- **Windows 10/11 x64**
- **Git with Git LFS** (binary assets are stored via LFS)

### Open the Editor
1. Double-click `scripts/Moria Editor.lnk` (or copy to your Desktop)
2. If prompted "Missing modules -- rebuild?", click **Yes**
3. If prompted about new plugins, click **Dismiss**
4. Expected warning: `DefaultMediaTexture` missing -- harmless

### Build from Command Line
```batch
"C:\Program Files\Epic Games\UE_4.27\Engine\Binaries\DotNET\UnrealBuildTool.exe" ^
  MoriaEditor Win64 Development ^
  -Project="<repo>\project\Moria.uproject"
```

## How the Pipelines Work

### Asset Import Pipeline (JsonAsAsset)
The primary import tool is JsonAsAsset, a UE4 editor plugin that reads JSON exports from FModel and reconstructs native .uasset files. A companion Cloud Server (localhost:1500) provides automatic dependency resolution -- when a material references a texture, the server provides the texture data so both import together.

```
FModel (JSON export) --> Cloud Server (dependency resolution) --> JsonAsAsset plugin (UE4 import)
```

The `batch_import.py` script orchestrates this: splitting 27,313 JSON exports into small batches, running the UE4 commandlet on each, catching crashes, and resuming automatically.

### Mesh Import Pipeline (UModel > Blender > UE4)
Meshes require a three-phase pipeline because JsonAsAsset only imports metadata, not geometry:

```
UModel (export glTF from paks) --> Blender (convert glTF to FBX) --> UE4 Editor (import FBX)
```

The `mesh_import.py` script runs all three phases. Result: 2,027/2,027 static meshes (100% coverage).

### Animation Pipeline (PSA > Blender > UE4)
Animations are exported as PSA files, converted to FBX via Blender with explicit skeleton mapping, and imported into UE4:

```
PSA files --> Blender (PSA to FBX) --> UE4 Python console (ue4_anim_fbx_import.py)
```

Result: 4,018 animations imported. 7 bow/crossbow animations failed (extra prop bones).

### Blueprint Decompilation Pipeline
Blueprints are compiled bytecode -- we can't reconstruct the visual editor graphs, but we can decompile them to readable pseudocode:

```
IoStore .uasset --> retoc (convert to legacy format) --> KismetKompiler (decompile to .kms)
```

Result: 4,406 Blueprints decompiled at 100% success rate. Output in `decompiled/`.

### Level Reconstruction Pipeline
The game's rooms ("bubbles") are defined by MorBubbleData assets. We export these as JSON via FModel, then generate UE4 Python scripts that reconstruct each room:

```
BubbleData JSON --> reconstruct_level.py --> UE4 Python script --> Edit > Execute Python Script
```

Three phases per room: (1) static mesh placement, (2) construction blocks via DecoVolume transforms, (3) breakable objects and deco markers. Key discovery: construction blocks have NO transforms of their own -- position data comes from matching DecoVolume names.

Result: 86 rooms, 292,543 actors total. Pre-generated scripts in `scripts/reconstructed/`.

## Scripts Guide

All scripts live in `scripts/` and are run from a terminal. Most have a `--run` flag -- without it, they do a dry run.

### Phase 1 -- Extraction

| Script | What It Does |
|--------|-------------|
| `extract_game_assets.py` | Extracts raw .uasset files from game paks via retoc |

### Phase 3 -- Asset Import

| Script | What It Does |
|--------|-------------|
| `batch_import.py` | Main batch importer via JsonAsAsset commandlet. Handles crashes, resuming, filtering. |
| `bulk_fetch_cloud.py` | Fetches asset metadata from Cloud Server |
| `run_tier12_import.py` | Imports tier 1-2 assets (textures, simple materials) |
| `run_tier4_import.py` | Imports tier 4 assets (complex materials, montages) |
| `prep_batch_tiers.py` | Sorts assets into dependency tiers |
| `export_textures.py` | Exports textures for import preparation |
| `ue4_texture_import.py` | Imports textures via commandlet |
| `start_cloud_server.bat` | Launches the JsonAsAsset Cloud Server |

### Mesh & Animation Import

| Script | What It Does |
|--------|-------------|
| `mesh_import.py` | Full mesh pipeline: UModel > Blender > UE4 (--phase 1\|2\|3\|all) |
| `gen_mesh_list.py` | Builds mesh import list |
| `gen_fbx_manifest.py` | Generates FBX import manifest |
| `build_anim_fbx_manifest.py` | Builds animation FBX manifest |
| `ue4_anim_fbx_import.py` | Imports animation FBX (run inside UE4 Python console) |
| `blender_batch_psk_to_fbx.py` | Batch converts PSK meshes to FBX |
| `blender_batch_gltf_to_fbx.py` | Batch converts glTF meshes to FBX |
| `blender_psa_to_fbx.py` | Converts PSA animations to FBX |

### Blueprint & Level Data

| Script | What It Does |
|--------|-------------|
| `batch_decompile_blueprints.py` | Full decompile pipeline: retoc + KismetKompiler |
| `copy_legacy_blueprints_to_project.py` | Copies legacy Blueprints into editor project |
| `copy_legacy_umaps_to_project.py` | Copies legacy .umap level files into editor project |
| `reconstruct_level.py` | Generates room reconstruction script from BubbleData JSON |
| `gap_analysis.py` | Compares extracted vs imported assets to find gaps |

### Generated Level Scripts

`scripts/reconstructed/` contains **86 pre-generated Python scripts**, one per game room. Run inside the UE4 editor via **Edit > Execute Python Script**.

| Script | Room | Actors |
|--------|------|--------|
| `reconstruct_BD_BB_Chapter4_BalrogsWake.py` | Balrog's Wake (largest) | 31,634 |
| `reconstruct_BD_BB_Chapter4_DurinsForge.py` | Durin's Forge | ~5,000 |
| `reconstruct_BD_BB_Passage_CrampedRavine.py` | Cramped Ravine (small, good for testing) | ~200 |
| `reconstruct_BD_BB_Chapter2_DoorsOfDurin.py` | Doors of Durin | ~3,000 |

**Note:** Scripts place geometry only. Materials appear gray/white. Cave walls and procedural terrain are not included.

## Repository Structure

```
Moria-Replication/
  project/                         UE4.27 editor project (the main deliverable)
    Moria.uproject                 Project file (9 game modules, 16 plugins)
    Source/                        8,700+ source files (9 compiled modules, 21 reference-only)
    Content/                       26,139 imported assets (via Git LFS)
    Config/                        Editor-generated config files
    Plugins/                       JsonAsAsset, FGK, EasySkyV2, Voxel, custom plugins
  scripts/                         All automation scripts
    reconstructed/                 86 generated room reconstruction scripts
    phase2_fix_compilation.md      Step-by-step compilation fix guide (14 steps)
    Moria Editor.lnk               Desktop shortcut for the editor
  decompiled/                      4,406 decompiled Blueprint .kms files
  docs/                            Documentation and research
    Moria Replication Project Guide.docx   Complete project reference (11 chapters + 5 appendices)
  tools/                           Third-party tools (gitignored, install locally)
  CLAUDE.md                        AI assistant context
  README.md                        This file
```

### Content Directory Breakdown

| Directory | Size | Files | Contents |
|-----------|------|-------|----------|
| Art/ | 7.0 GB | 6,045 | Architecture kits, decoration meshes, materials |
| CharacterArt/ | 6.1 GB | 2,282 | Character models, armor, creature meshes |
| Unshippable/ | 3.0 GB | 1,931 | Whitebox geometry, third-party assets |
| Maps/ | 1.6 GB | 1,640 | Level map files (.umap) |
| DLC/ | 1.0 GB | 1,195 | DLC content (Beorn, Durin's Folk, Holiday) |
| Items/ | 821 MB | 1,892 | Weapons, tools, crafting items |
| Environments/ | 645 MB | 1,189 | Environmental materials, procedural texturing |
| Animations/ | 166 MB | 5,776 | Animations, montages, blend spaces |
| LevelDesign/ | 112 MB | 5,236 | Level design data, challenges, deco |
| UI/ | 64 MB | 1,289 | UI widgets, icons, textures |

### Compiled Modules (9 game modules)

| Module | Files | Description |
|--------|-------|-------------|
| Moria | 5,114 | Main game module -- characters, building, inventory, AI, world |
| FGK | 1,713 | Free-range Games Kit framework |
| FGKAnalytics | 8 | Analytics integration |
| FGKDebugMenu | 16 | Debug menu system |
| FGKLoadingScreen | 6 | Loading screen |
| FGKNavPowerPlaceholder | 8 | Navigation placeholder |
| FGKStaticData | 20 | Static data tables wrapper (the cache that blocks runtime mods) |
| FGKUE5Stubs | 17 | UE5 API stubs for UE4 compatibility |
| FGKUIToolkit | 38 | UI toolkit |

## What Worked and What Didn't

### Worked Well
- **JsonAsAsset + Cloud Server** -- Reliable for textures, materials, data tables, curves. Dependency resolution handled complex material chains automatically.
- **UModel mesh export** -- Clean glTF output, 100% mesh coverage through the Blender FBX pipeline.
- **KismetKompiler** -- 100% success rate decompiling 4,406 Blueprints.
- **BubbleData reconstruction** -- Key breakthrough: ConstructionCatalog blocks get positions from matching DecoVolume names, not their own transforms.
- **PowerShell over os.walk** -- Critical for OneDrive: Get-ChildItem in seconds vs os.walk in minutes.

### Did Not Work
- **Material parent shaders** -- The biggest gap. Shader graphs are compiled to bytecode during cooking and the original node layout is lost. All meshes render gray/white.
- **Blueprint reconstruction** -- Decompilation to pseudocode works, but visual graph data is stripped during cooking. No path to editable Blueprints.
- **Stove with IoStore format** -- Patched for legacy .umap (PR #116), but native IoStore/Zen support needs a full Zen parser.
- **OneDrive + Git** -- Phantom files, circular junctions, and cloud-only files caused friction throughout.
- **Lightmap baking** -- Imported meshes lack dedicated lightmap UVs. Must use dynamic (Movable) lights.

## Known Issues

- **Materials are non-functional** -- All meshes render gray/white. Material Instances have correct parameters but parent shader graphs can't be reconstructed.
- **7 bow/crossbow animations failed** -- Extra prop bones not in base Dwarf skeleton.
- **12 Troll AnimMontages skipped** -- JsonAsAsset `.6` object index limitation.
- **Lightmap UV overlaps** -- Use Movable (dynamic) lights, don't bake lighting.
- **OneDrive performance** -- Use PowerShell `Get-ChildItem`, never `os.walk`. Use `cmd /c rmdir` for junction links.

## Reproducing From Scratch

1. **Phase 1:** Run `extract_game_assets.py` to extract game paks
2. **Phase 2:** Run UE4GameProjectGenerator, then follow `scripts/phase2_fix_compilation.md` (14 fix steps)
3. **Phase 3:** Start Cloud Server, run `batch_import.py --run`, then mesh and animation scripts
4. **Blueprints:** Run `batch_decompile_blueprints.py --run`, then `copy_legacy_blueprints_to_project.py --run`
5. **Levels:** Run `copy_legacy_umaps_to_project.py --run`, then `reconstruct_level.py` per room

Full details in [`docs/Moria Replication Project Guide.docx`](docs/Moria%20Replication%20Project%20Guide.docx).

## Companion Project

**[MoriaAdvancedBuilder](https://github.com/jbowensii/MoriaAdvancedBuilder)** -- runtime C++ mod via UE4SS DLL injection.

The two projects work together:
- **This project**: Persistent content cooked into IoStore paks (loaded at startup)
- **MoriaAdvancedBuilder**: Runtime behavior via UE4SS (runs while game is playing)

## Tools Directory (Not Tracked)

The `tools/` directory is gitignored. Install locally:

| Tool | Version | Purpose |
|------|---------|---------|
| **FModel** | Latest | Export game assets to JSON |
| **retoc** | v0.1.5+ | Convert IoStore to legacy .uasset/.uexp |
| **KismetKompiler** | v0.4.0-alpha | Decompile Blueprint bytecode to .kms |
| **UModel** | Latest 64-bit | Export meshes and animations from cooked paks |
| **JsonAsAsset Cloud Server** | Latest | Dependency resolution for asset import |
| **Blender** | 3.x+ | Convert PSK/PSA/glTF to FBX |
| **Stove** (patched) | Custom build | Edit .umap files outside the editor |

## Reference

- **Engine**: Unreal Engine 4.27
- **Game**: The Lord of the Rings: Return to Moria (Free Range Games / North Beach Games)
- **Closest reference**: [DRG FSD-Template](https://github.com/DRG-Modding/FSD-Template) (same UE4.27 approach)
- **Key guides**: [Buckminsterfullerene Modding Guide](https://buckminsterfullerene02.github.io/dev-guide/), [Dmgvol UE Modding](https://github.com/Dmgvol/UE_Modding)

## License

MIT
# Secrets-of-Khazad-dum-replication
