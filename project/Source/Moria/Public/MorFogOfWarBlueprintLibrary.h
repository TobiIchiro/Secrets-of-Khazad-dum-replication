#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MorFogOfWarRef.h"
#include "MorZoneRowHandle.h"
#include "MorFogOfWarBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorFogOfWarBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorFogOfWarBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FMorFogOfWarRef& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPreviousDiscoveredChapterId(const FMorFogOfWarRef& Target, int32 ChapterId, bool& bOutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumDiscoveredChapters(const FMorFogOfWarRef& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNextDiscoveredChapterId(const FMorFogOfWarRef& Target, int32 ChapterId, bool& bOutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNeighborDiscoveredChapterId(const FMorFogOfWarRef& Target, int32 ChapterId, int32 Direction, bool& bOutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetFirstDiscoveredChapterId(const FMorFogOfWarRef& Target, bool& bOutIsValid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSet<FMorZoneRowHandle> GetDiscoveredZones(const FMorFogOfWarRef& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<int32> GetDiscoveredChapters(const FMorFogOfWarRef& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSet<FIntVector> GetDiscoveredBubbles(const FMorFogOfWarRef& Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetChapterName(const FMorFogOfWarRef& Target, int32 ChapterId, bool& bOutIsValid);
    
};

