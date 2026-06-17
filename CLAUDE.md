# Moria Replication Project

## What This Is
A UE4.27 editor project reconstruction from Return to Moria's shipped game content. The goal is to create a baseline modding project where we can modify DataTables, create new Blueprints, edit biome/zone configs, fix unique room objects, and cook everything into IoStore mod paks.

## Companion Project
The C++ runtime mod lives at: `c:\Users\johnb\OneDrive\Documents\Projects\UE4SS Testing\cpp-mod\`
GitHub: https://github.com/jbowensii/MoriaAdvancedBuilder (v6.3.9+)

The two projects work together:
- **This project** (Moria-Replication): Persistent content — DataTable rows, Blueprints, meshes, textures, level overrides, cooked into IoStore paks
- **MoriaAdvancedBuilder**: Runtime behavior — UE4SS C++ mod with hooks, ProcessEvent, fly mode, quick-build, HISM removal, UI overlays

## Key Documents
- `docs/Moria Replication Plan - Editor Project Reconstruction.md` — 7-phase step-by-step plan with commands
- `docs/Future Research - Build Menu Injection and New Capabilities.md` — enhancement experiments and deep dives

## Game Details
- **Game**: The Lord of the Rings: Return to Moria by Free Range Games
- **Engine**: Unreal Engine 4.27
- **Packaging**: IoStore (.pak/.ucas/.utoc)
- **Game Path**: `C:\Program Files\Epic Games\ReturnToMoria\`
- **Paks**: `Moria\Content\Paks\` (main pak 15.6 GB .ucas + DLC)

## UHT Headers (Already Generated)
- Location: `c:\Users\johnb\OneDrive\Documents\Projects\UE4SS Testing\dumps\UHTHeaderDump\` — 151 modules, 8,881 .h files
- CXX dump: `c:\Users\johnb\OneDrive\Documents\Projects\UE4SS Testing\dumps\CXXHeaderDump\` — 3,028 .hpp files

## Tools Required
- UE4.27 Editor — `C:\Program Files\Epic Games\UE_4.27\`
- FModel (dec-2025) — `<project>\tools\FModel\FModel.exe`
- retoc (v0.1.5) — `<project>\tools\retoc\bin\retoc.exe`
- JsonAsAsset (v1.4.1, UE4.27.2) — `<project>\tools\JsonAsAsset\JsonAsAsset\` (editor plugin)
- JsonAsAsset Cloud Server (v0.0.5.0) — `<project>\tools\JsonAsAssetServer\Core.exe`
- UE4GameProjectGenerator — `<project>\tools\UE4GameProjectGenerator\`

`<project>` = `C:\Users\johnb\OneDrive\Documents\Projects\Moria-Replication`

## Key Technical Facts
- FGK framework wraps DataTables with caches built at init — new rows in cooked paks load BEFORE FGK init, solving the cache problem
- Existing mods (TobiModsAddons, Secrets of Khazad-dum) prove cooked pak approach works
- DRG FSD-Template (UE4.27) is the closest reference project
- Unique rooms are .umap sublevel files — user knows their locations
- Biome system is heavily data-driven: FBiomeDefinition, FZoneDefinition, UMorBubbleDefinition all modifiable via DataTables
