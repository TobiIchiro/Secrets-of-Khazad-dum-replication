#include "VoxelIntBoxLibrary.h"

UVoxelIntBoxLibrary::UVoxelIntBoxLibrary() {
}

FVoxelIntBox UVoxelIntBoxLibrary::TranslateBox(FVoxelIntBox Box, FIntVector Position) {
    return FVoxelIntBox{};
}

FVoxelIntBox UVoxelIntBoxLibrary::Scale(FVoxelIntBox Box, int32 NewScale) {
    return FVoxelIntBox{};
}

FVoxelIntBox UVoxelIntBoxLibrary::RemoveTranslation(FVoxelIntBox Box) {
    return FVoxelIntBox{};
}

FVoxelIntBox UVoxelIntBoxLibrary::Overlap(FVoxelIntBox A, FVoxelIntBox B) {
    return FVoxelIntBox{};
}

bool UVoxelIntBoxLibrary::NotEqual_IntBoxIntBox(FVoxelIntBox A, FVoxelIntBox B) {
    return false;
}

FVoxelIntBoxWithValidity UVoxelIntBoxLibrary::MakeIntBoxWithValidity(FVoxelIntBox Box, bool bIsValid) {
    return FVoxelIntBoxWithValidity{};
}

FVoxelIntBox UVoxelIntBoxLibrary::MakeIntBoxFromPoints(TArray<FVector> Points) {
    return FVoxelIntBox{};
}

FVoxelIntBox UVoxelIntBoxLibrary::MakeIntBox(FIntVector Min, FIntVector Max) {
    return FVoxelIntBox{};
}

FVoxelIntBox UVoxelIntBoxLibrary::MakeBoxFromPositionAndRadius(FVector Position, float Radius) {
    return FVoxelIntBox{};
}

FVoxelIntBox UVoxelIntBoxLibrary::MakeBoxFromLocalPositionAndRadius(FIntVector Position, int32 Radius) {
    return FVoxelIntBox{};
}

bool UVoxelIntBoxLibrary::IsVectorInsideBox(FVoxelIntBox Box, FVector Position) {
    return false;
}

bool UVoxelIntBoxLibrary::IsValid(FVoxelIntBox Box) {
    return false;
}

bool UVoxelIntBoxLibrary::IsIntVectorInsideBox(FVoxelIntBox Box, FIntVector Position) {
    return false;
}

bool UVoxelIntBoxLibrary::Intersect(FVoxelIntBox Box, FVoxelIntBox Other) {
    return false;
}

FVoxelIntBox UVoxelIntBoxLibrary::InfiniteBox() {
    return FVoxelIntBox{};
}

FIntVector UVoxelIntBoxLibrary::GetSize(FVoxelIntBox Box) {
    return FIntVector{};
}

TArray<FIntVector> UVoxelIntBoxLibrary::GetCorners(FVoxelIntBox Box) {
    return TArray<FIntVector>();
}

FVector UVoxelIntBoxLibrary::GetCenter(FVoxelIntBox Box) {
    return FVector{};
}

FVoxelIntBox UVoxelIntBoxLibrary::Extend_IntVector(FVoxelIntBox Box, FIntVector Extent) {
    return FVoxelIntBox{};
}

FVoxelIntBox UVoxelIntBoxLibrary::Extend(FVoxelIntBox Box, int32 Extent) {
    return FVoxelIntBox{};
}

bool UVoxelIntBoxLibrary::EqualEqual_IntBoxIntBox(FVoxelIntBox A, FVoxelIntBox B) {
    return false;
}

FVoxelIntBox UVoxelIntBoxLibrary::Conv_IntVectorToVoxelIntBox(FIntVector Vector) {
    return FVoxelIntBox{};
}

FString UVoxelIntBoxLibrary::Conv_IntBoxToString(FVoxelIntBox IntBox) {
    return TEXT("");
}

bool UVoxelIntBoxLibrary::Contains(FVoxelIntBox Box, FVoxelIntBox Other) {
    return false;
}

FVoxelIntBox UVoxelIntBoxLibrary::Center(FVoxelIntBox Box) {
    return FVoxelIntBox{};
}

void UVoxelIntBoxLibrary::BreakIntBoxWithValidity(FVoxelIntBoxWithValidity BoxWithValidity, FVoxelIntBox& Box, bool& bIsValid) {
}

void UVoxelIntBoxLibrary::BreakIntBox(FVoxelIntBox Box, FIntVector& Min, FIntVector& Max) {
}

FVoxelIntBox UVoxelIntBoxLibrary::ApplyTransform(FVoxelIntBox Box, FTransform Transform) {
    return FVoxelIntBox{};
}

FVoxelIntBox UVoxelIntBoxLibrary::AddPoint(FVoxelIntBox Box, FIntVector Point) {
    return FVoxelIntBox{};
}

FVoxelIntBox UVoxelIntBoxLibrary::AddBox(FVoxelIntBox Box, FVoxelIntBox BoxToAdd) {
    return FVoxelIntBox{};
}


