#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMonumentType.h"
#include "MorSettlementHandle.h"
#include "MorSettlementUtils.generated.h"

class UObject;

UCLASS(Blueprintable)
class MORIA_API UMorSettlementUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorSettlementUtils();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SwapActivation(const UObject* WorldContextObject, FMorSettlementHandle SettlementToActivate, FMorSettlementHandle SettlementToDeactivate);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveNpcFromSettlement(const UObject* WorldContextObject, FGuid NpcGuid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MoveNpcToSettlement(const UObject* WorldContextObject, FGuid NpcGuid, FMorSettlementHandle SettlementHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ConfirmMonumentBuildStart(const UObject* WorldContextObject, EMonumentType MonumentType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ConfirmDeconstruct(const UObject* WorldContextObject, FMorSettlementHandle SettlementToDeconstruct);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ChangeSettlementName(const UObject* WorldContextObject, FMorSettlementHandle SettlementHandle, FText NewName);
    
};

