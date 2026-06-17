#include "VoxelBlueprintLibrary.h"

UVoxelBlueprintLibrary::UVoxelBlueprintLibrary() {
}

void UVoxelBlueprintLibrary::UpdatePosition(AVoxelWorld* World, FIntVector Position) {
}

void UVoxelBlueprintLibrary::UpdateBounds(AVoxelWorld* World, FVoxelIntBox Bounds) {
}

void UVoxelBlueprintLibrary::UpdateAll(AVoxelWorld* World) {
}

bool UVoxelBlueprintLibrary::Undo(AVoxelWorld* World, TArray<FVoxelIntBox>& OutUpdatedBounds) {
    return false;
}

FBox UVoxelBlueprintLibrary::TransformVoxelBoxToGlobalBox(AVoxelWorld* World, FVoxelIntBox Box) {
    return FBox{};
}

FVoxelIntBox UVoxelBlueprintLibrary::TransformGlobalBoxToVoxelBox(AVoxelWorld* World, FBox Box) {
    return FVoxelIntBox{};
}

FIntVector UVoxelBlueprintLibrary::Substract_IntVectorIntVector(FIntVector Left, FIntVector Right) {
    return FIntVector{};
}

void UVoxelBlueprintLibrary::SetToolRenderingMaterial(AVoxelWorld* World, FVoxelToolRenderingRef Ref, UMaterialInterface* Material) {
}

void UVoxelBlueprintLibrary::SetToolRenderingEnabled(AVoxelWorld* World, FVoxelToolRenderingRef Ref, bool bEnabled) {
}

void UVoxelBlueprintLibrary::SetToolRenderingBounds(AVoxelWorld* World, FVoxelToolRenderingRef Ref, FBox Bounds) {
}

void UVoxelBlueprintLibrary::SetNumberOfVoxelThreads(int32 Number) {
}

void UVoxelBlueprintLibrary::ScaleData(AVoxelWorld* World, const FVector& Scale) {
}

void UVoxelBlueprintLibrary::SaveFrame(AVoxelWorld* World) {
}

void UVoxelBlueprintLibrary::RegenerateSpawners(AVoxelWorld* World, FVoxelIntBox Bounds) {
}

bool UVoxelBlueprintLibrary::Redo(AVoxelWorld* World, TArray<FVoxelIntBox>& OutUpdatedBounds) {
    return false;
}

void UVoxelBlueprintLibrary::RecreateSpawners(AVoxelWorld* World) {
}

void UVoxelBlueprintLibrary::RecreateRender(AVoxelWorld* World) {
}

void UVoxelBlueprintLibrary::Recreate(AVoxelWorld* World, bool bSaveData) {
}

void UVoxelBlueprintLibrary::RecomputeComponentPositions(AVoxelWorld* World) {
}

void UVoxelBlueprintLibrary::RaiseWarning(const FString& Message, UObject* Object) {
}

void UVoxelBlueprintLibrary::RaiseInfo(const FString& Message, UObject* Object) {
}

void UVoxelBlueprintLibrary::RaiseError(const FString& Message, UObject* Object) {
}

int32 UVoxelBlueprintLibrary::NumberOfCores() {
    return 0;
}

FIntVector UVoxelBlueprintLibrary::Multiply_IntVectorIntVector(FIntVector Left, FIntVector Right) {
    return FIntVector{};
}

FIntVector UVoxelBlueprintLibrary::Multiply_IntVectorInt(FIntVector Left, int32 Right) {
    return FIntVector{};
}

FIntVector UVoxelBlueprintLibrary::Multiply_IntIntVector(int32 Left, FIntVector Right) {
    return FIntVector{};
}

void UVoxelBlueprintLibrary::MarkSpawnersDirty(AVoxelWorld* World, FVoxelIntBox Bounds) {
}

FVoxelMaterial UVoxelBlueprintLibrary::MakeSingleIndexMaterial(uint8 Index) {
    return FVoxelMaterial{};
}

FVoxelMaterial UVoxelBlueprintLibrary::MakeRawMaterial(uint8 R, uint8 G, uint8 B, uint8 A, uint8 U0, uint8 V0, uint8 U1, uint8 v1, uint8 U2, uint8 v2, uint8 U3, uint8 V3) {
    return FVoxelMaterial{};
}

int32 UVoxelBlueprintLibrary::MakeMaterialMask(bool R, bool G, bool B, bool A, bool U0, bool V0, bool U1, bool v1, bool U2, bool v2, bool U3, bool V3) {
    return 0;
}

FVoxelIntBox UVoxelBlueprintLibrary::MakeIntBoxFromGlobalPositionAndRadius(AVoxelWorld* World, FVector GlobalPosition, float Radius) {
    return FVoxelIntBox{};
}

FVoxelMaterial UVoxelBlueprintLibrary::MakeColorMaterial(FLinearColor Color) {
    return FVoxelMaterial{};
}

void UVoxelBlueprintLibrary::LogMemoryStats() {
}

bool UVoxelBlueprintLibrary::IsVoxelWorldMeshLoading(AVoxelWorld* World) {
    return false;
}

bool UVoxelBlueprintLibrary::IsVoxelWorldFoliageLoading(AVoxelWorld* World) {
    return false;
}

bool UVoxelBlueprintLibrary::IsVoxelPluginPro() {
    return false;
}

bool UVoxelBlueprintLibrary::IsVoxelFloatTextureValid(FVoxelFloatTexture Texture) {
    return false;
}

bool UVoxelBlueprintLibrary::IsVoxelColorTextureValid(FVoxelFloatTexture Texture) {
    return false;
}

bool UVoxelBlueprintLibrary::IsValidRef(AVoxelWorld* World, FVoxelToolRenderingRef Ref) {
    return false;
}

bool UVoxelBlueprintLibrary::IntervalContains_Int32(FVoxelInt32Interval Interval, int32 Value) {
    return false;
}

bool UVoxelBlueprintLibrary::IntervalContains_Float(FVoxelFloatInterval Interval, float Value) {
    return false;
}

bool UVoxelBlueprintLibrary::HasValueData(AVoxelWorld* World) {
    return false;
}

bool UVoxelBlueprintLibrary::HasMaterialData(AVoxelWorld* World) {
    return false;
}

AVoxelWorld* UVoxelBlueprintLibrary::GetVoxelWorldOverlappingBox(UObject* WorldContextObject, FBox Box) {
    return NULL;
}

AVoxelWorld* UVoxelBlueprintLibrary::GetVoxelWorldOverlappingActor(AActor* Actor) {
    return NULL;
}

AVoxelWorld* UVoxelBlueprintLibrary::GetVoxelWorldContainingPosition(UObject* WorldContextObject, FVector Position) {
    return NULL;
}

FIntPoint UVoxelBlueprintLibrary::GetVoxelFloatTextureSize(FVoxelFloatTexture Texture) {
    return FIntPoint{};
}

FIntPoint UVoxelBlueprintLibrary::GetVoxelColorTextureSize(FVoxelColorTexture Texture) {
    return FIntPoint{};
}

FVector2D UVoxelBlueprintLibrary::GetUV(FVoxelMaterial Material, int32 Channel) {
    return FVector2D{};
}

int32 UVoxelBlueprintLibrary::GetTaskCount(AVoxelWorld* World) {
    return 0;
}

uint8 UVoxelBlueprintLibrary::GetSingleIndex(FVoxelMaterial Material) {
    return 0;
}

FVoxelIntBox UVoxelBlueprintLibrary::GetRenderBoundsOverlappingDataBounds(AVoxelWorld* World, FVoxelIntBox DataBounds, int32 LOD) {
    return FVoxelIntBox{};
}

void UVoxelBlueprintLibrary::GetRawMaterial(FVoxelMaterial Material, uint8& R, uint8& G, uint8& B, uint8& A, uint8& U0, uint8& V0, uint8& U1, uint8& v1, uint8& U2, uint8& v2, uint8& U3, uint8& V3) {
}

float UVoxelBlueprintLibrary::GetPeakMemoryUsageInMB(EVoxelMemoryUsageType Type) {
    return 0.0f;
}

int32 UVoxelBlueprintLibrary::GetNumberOfVoxelThreads() {
    return 0;
}

FVector UVoxelBlueprintLibrary::GetNormal(AVoxelWorld* World, FIntVector Position) {
    return FVector{};
}

void UVoxelBlueprintLibrary::GetMultiIndex(FVoxelMaterial Material, bool bSortByStrength, float& Strength0, uint8& Index0, float& Strength1, uint8& Index1, float& Strength2, uint8& Index2, float& Strength3, uint8& Index3, float& Wetness) {
}

int32 UVoxelBlueprintLibrary::GetMin_Intvector(FIntVector Vector) {
    return 0;
}

float UVoxelBlueprintLibrary::GetMemoryUsageInMB(EVoxelMemoryUsageType Type) {
    return 0.0f;
}

int32 UVoxelBlueprintLibrary::GetMax_Intvector(FIntVector Vector) {
    return 0;
}

int32 UVoxelBlueprintLibrary::GetIntOutput(AVoxelWorld* World, FName Name, float X, float Y, float Z, int32 DefaultValue) {
    return 0;
}

int32 UVoxelBlueprintLibrary::GetHistoryPosition(AVoxelWorld* World) {
    return 0;
}

float UVoxelBlueprintLibrary::GetFloatOutput(AVoxelWorld* World, FName Name, float X, float Y, float Z, float DefaultValue) {
    return 0.0f;
}

float UVoxelBlueprintLibrary::GetEstimatedCollisionsMemoryUsageInMB(AVoxelWorld* World) {
    return 0.0f;
}

FLinearColor UVoxelBlueprintLibrary::GetColor(FVoxelMaterial Material) {
    return FLinearColor{};
}

FVoxelIntBox UVoxelBlueprintLibrary::GetBounds(AVoxelWorld* World) {
    return FVoxelIntBox{};
}

TArray<AVoxelWorld*> UVoxelBlueprintLibrary::GetAllVoxelWorldsOverlappingBox(UObject* WorldContextObject, FBox Box) {
    return TArray<AVoxelWorld*>();
}

TArray<AVoxelWorld*> UVoxelBlueprintLibrary::GetAllVoxelWorldsOverlappingActor(AActor* Actor) {
    return TArray<AVoxelWorld*>();
}

TArray<AVoxelWorld*> UVoxelBlueprintLibrary::GetAllVoxelWorldsContainingPosition(UObject* WorldContextObject, FVector Position) {
    return TArray<AVoxelWorld*>();
}

FIntVector UVoxelBlueprintLibrary::Divide_IntVectorInt(FIntVector Left, int32 Right) {
    return FIntVector{};
}

void UVoxelBlueprintLibrary::DestroyToolRendering(AVoxelWorld* World, FVoxelToolRenderingRef Ref) {
}

FVoxelFloatTexture UVoxelBlueprintLibrary::CreateVoxelFloatTextureFromTextureChannel(UTexture2D* Texture, EVoxelRGBA Channel) {
    return FVoxelFloatTexture{};
}

FVoxelColorTexture UVoxelBlueprintLibrary::CreateVoxelColorTextureFromVoxelFloatTexture(FVoxelFloatTexture Texture, EVoxelRGBA Channel, bool bNormalize) {
    return FVoxelColorTexture{};
}

FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateUVPaintMaterial(FVoxelPaintMaterialUV UV) {
    return FVoxelPaintMaterial{};
}

FVoxelToolRenderingRef UVoxelBlueprintLibrary::CreateToolRendering(AVoxelWorld* World) {
    return FVoxelToolRenderingRef{};
}

UTexture2D* UVoxelBlueprintLibrary::CreateTextureFromVoxelFloatTexture(FVoxelFloatTexture VoxelTexture) {
    return NULL;
}

UTexture2D* UVoxelBlueprintLibrary::CreateTextureFromVoxelColorTexture(FVoxelColorTexture VoxelTexture) {
    return NULL;
}

FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateSingleIndexPaintMaterial(FVoxelPaintMaterialSingleIndex SingleIndex) {
    return FVoxelPaintMaterial{};
}

UTexture2D* UVoxelBlueprintLibrary::CreateOrUpdateTextureFromVoxelFloatTexture(FVoxelFloatTexture VoxelTexture, UTexture2D*& Texture) {
    return NULL;
}

UTexture2D* UVoxelBlueprintLibrary::CreateOrUpdateTextureFromVoxelColorTexture(FVoxelColorTexture VoxelTexture, UTexture2D*& Texture) {
    return NULL;
}

FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateMultiIndexWetnessPaintMaterial(FVoxelPaintMaterialMultiIndexWetness MultiIndexWetness) {
    return FVoxelPaintMaterial{};
}

FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateMultiIndexRawPaintMaterial(FVoxelPaintMaterialMultiIndexRaw MultiIndexRaw) {
    return FVoxelPaintMaterial{};
}

FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateMultiIndexPaintMaterial(FVoxelPaintMaterialMultiIndex MultiIndex) {
    return FVoxelPaintMaterial{};
}

FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateFiveWayBlendPaintMaterial(FVoxelPaintMaterialFiveWayBlend FiveWayBlend) {
    return FVoxelPaintMaterial{};
}

FVoxelPaintMaterial UVoxelBlueprintLibrary::CreateColorPaintMaterial(FVoxelPaintMaterialColor Color) {
    return FVoxelPaintMaterial{};
}

void UVoxelBlueprintLibrary::CompactVoxelTexturePool(AVoxelWorld* World) {
}

void UVoxelBlueprintLibrary::ClearValueData(AVoxelWorld* World, bool bUpdateRender) {
}

void UVoxelBlueprintLibrary::ClearMaterialData(AVoxelWorld* World, bool bUpdateRender) {
}

void UVoxelBlueprintLibrary::ClearFrames(AVoxelWorld* World) {
}

void UVoxelBlueprintLibrary::ClearDirtyData(AVoxelWorld* World, bool bUpdateRender) {
}

void UVoxelBlueprintLibrary::ClearAllData(AVoxelWorld* World, bool bUpdateRender) {
}

void UVoxelBlueprintLibrary::BindVoxelGenerationEvent(AVoxelWorld* World, FChunkDynamicDelegate OnGenerate, bool bFireExistingOnes, int32 ChunkSize, int32 GenerationDistanceInChunks) {
}

void UVoxelBlueprintLibrary::BindVoxelChunkEvents(AVoxelWorld* World, FChunkDynamicDelegate OnActivate, FChunkDynamicDelegate OnDeactivate, bool bFireExistingOnes, int32 ChunkSize, int32 ActivationDistanceInChunks) {
}

bool UVoxelBlueprintLibrary::AreCollisionsEnabled(AVoxelWorld* World, FVector Position, int32& LOD, bool bConvertToVoxelSpace) {
    return false;
}

FVoxelMaterial UVoxelBlueprintLibrary::ApplyPaintMaterial(FVoxelMaterial Material, FVoxelPaintMaterial PaintMaterial, float Strength) {
    return FVoxelMaterial{};
}

void UVoxelBlueprintLibrary::ApplyNewMaterials(AVoxelWorld* World) {
}

void UVoxelBlueprintLibrary::ApplyLODSettings(AVoxelWorld* World) {
}

void UVoxelBlueprintLibrary::AddNeighborsToSet(const TSet<FIntVector>& InSet, TSet<FIntVector>& OutSet) {
}

FIntVector UVoxelBlueprintLibrary::Add_IntVectorIntVector(FIntVector Left, FIntVector Right) {
    return FIntVector{};
}


