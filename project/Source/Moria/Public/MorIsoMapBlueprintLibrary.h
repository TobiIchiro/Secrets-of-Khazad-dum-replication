#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MorIsoMapMarkerId.h"
#include "MorIsoMapBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorIsoMapBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorIsoMapBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorIsoMapMarkerId MakeWaypointMarkerId(int32 WaypointId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsWaypointMarkerId(const FMorIsoMapMarkerId& MarkerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMarkerIdValid(const FMorIsoMapMarkerId& MarkerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetWaypointIdFromMarkerId(const FMorIsoMapMarkerId& MarkerId, int32& OutWaypointId);
    
};

