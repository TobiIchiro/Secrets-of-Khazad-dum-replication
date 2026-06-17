#include "VoxelWorld.h"
#include "Templates/SubclassOf.h"
#include "VoxelLineBatchComponent.h"
#include "VoxelMultiplayerTcpInterface.h"
#include "VoxelWorldRootComponent.h"

AVoxelWorld::AVoxelWorld(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UVoxelWorldRootComponent>(TEXT("Root"));
    this->MultiplayerInterface = UVoxelMultiplayerTcpInterface::StaticClass();
    this->WorldRoot = (UVoxelWorldRootComponent*)RootComponent;
    this->LineBatchComponent = CreateDefaultSubobject<UVoxelLineBatchComponent>(TEXT("LineBatchComponent"));
    this->SaveObject = NULL;
    this->bAutomaticallySaveToFile = false;
    this->bAppendDateToSavePath = false;
    this->bRecomputeNormalsBeforeBaking = false;
    this->BakedMeshTemplate = NULL;
    this->BakedMeshComponentTemplate = NULL;
    this->bEnableFoliageInEditor = true;
    this->bAutomaticallyRefreshMaterials = true;
    this->bAutomaticallyRefreshFoliage = true;
    this->NumberOfThreads = 0;
    this->SpawnerConfig = NULL;
    this->MultiplayerInterfaceInstance = NULL;
    this->GeneratorCache = NULL;
    this->PlaceableItemActorHelper = NULL;
    this->bIsToggled = false;
}

void AVoxelWorld::SetWorldSize(int32 NewWorldSizeInVoxel) {
}

void AVoxelWorld::SetRenderOctreeDepth(int32 NewDepth) {
}

void AVoxelWorld::SetRenderOctreeChunkSize(int32 NewChunkSize) {
}

void AVoxelWorld::SetGeneratorObject(UVoxelGenerator* NewGenerator) {
}

void AVoxelWorld::SetGeneratorClass(TSubclassOf<UVoxelGenerator> NewGeneratorClass) {
}

void AVoxelWorld::SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse) {
}

FVector AVoxelWorld::K2_LocalToGlobalFloat(const FVector& Position) const {
    return FVector{};
}

FBox AVoxelWorld::K2_LocalToGlobalBounds(const FVoxelIntBox& Bounds) const {
    return FBox{};
}

FVector AVoxelWorld::K2_LocalToGlobal(const FIntVector& Position) const {
    return FVector{};
}

FVector AVoxelWorld::K2_GlobalToLocalFloat(const FVector& Position) const {
    return FVector{};
}

FVoxelIntBox AVoxelWorld::K2_GlobalToLocalBounds(const FBox& Bounds) const {
    return FVoxelIntBox{};
}

FIntVector AVoxelWorld::K2_GlobalToLocal(FVector Position, EVoxelWorldCoordinatesRounding Rounding) const {
    return FIntVector{};
}

bool AVoxelWorld::IsLoaded() const {
    return false;
}

bool AVoxelWorld::IsCreated() const {
    return false;
}

TArray<FIntVector> AVoxelWorld::GetNeighboringPositions(const FVector& GlobalPosition) const {
    return TArray<FIntVector>();
}

UVoxelMultiplayerInterface* AVoxelWorld::GetMultiplayerInterfaceInstance() const {
    return NULL;
}

FVoxelGeneratorInit AVoxelWorld::GetGeneratorInit() const {
    return FVoxelGeneratorInit{};
}

UVoxelGeneratorCache* AVoxelWorld::GetGeneratorCache() const {
    return NULL;
}

void AVoxelWorld::DestroyWorld() {
}

void AVoxelWorld::CreateWorld(FVoxelWorldCreateInfo Info) {
}

UVoxelMultiplayerInterface* AVoxelWorld::CreateMultiplayerInterfaceInstance() {
    return NULL;
}


