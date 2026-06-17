#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoxelIntBox.h"
#include "VoxelIntBoxWithValidity.h"
#include "VoxelIntBoxLibrary.generated.h"

UCLASS(Blueprintable)
class UVoxelIntBoxLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelIntBoxLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox TranslateBox(FVoxelIntBox Box, FIntVector Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox Scale(FVoxelIntBox Box, int32 NewScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox RemoveTranslation(FVoxelIntBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox Overlap(FVoxelIntBox A, FVoxelIntBox B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_IntBoxIntBox(FVoxelIntBox A, FVoxelIntBox B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBoxWithValidity MakeIntBoxWithValidity(FVoxelIntBox Box, bool bIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox MakeIntBoxFromPoints(TArray<FVector> Points);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox MakeIntBox(FIntVector Min, FIntVector Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox MakeBoxFromPositionAndRadius(FVector Position, float Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox MakeBoxFromLocalPositionAndRadius(FIntVector Position, int32 Radius);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsVectorInsideBox(FVoxelIntBox Box, FVector Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(FVoxelIntBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsIntVectorInsideBox(FVoxelIntBox Box, FIntVector Position);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Intersect(FVoxelIntBox Box, FVoxelIntBox Other);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox InfiniteBox();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntVector GetSize(FVoxelIntBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FIntVector> GetCorners(FVoxelIntBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetCenter(FVoxelIntBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox Extend_IntVector(FVoxelIntBox Box, FIntVector Extent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox Extend(FVoxelIntBox Box, int32 Extent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_IntBoxIntBox(FVoxelIntBox A, FVoxelIntBox B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox Conv_IntVectorToVoxelIntBox(FIntVector Vector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_IntBoxToString(FVoxelIntBox IntBox);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Contains(FVoxelIntBox Box, FVoxelIntBox Other);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox Center(FVoxelIntBox Box);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakIntBoxWithValidity(FVoxelIntBoxWithValidity BoxWithValidity, FVoxelIntBox& Box, bool& bIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BreakIntBox(FVoxelIntBox Box, FIntVector& Min, FIntVector& Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox ApplyTransform(FVoxelIntBox Box, FTransform Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox AddPoint(FVoxelIntBox Box, FIntVector Point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVoxelIntBox AddBox(FVoxelIntBox Box, FVoxelIntBox BoxToAdd);
    
};

