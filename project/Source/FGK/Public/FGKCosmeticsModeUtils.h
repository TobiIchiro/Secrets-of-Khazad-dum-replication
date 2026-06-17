#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFGKCosmeticEquipSlot.h"
#include "FGKCosmeticsMode.h"
#include "FGKCosmeticsModeUtils.generated.h"

UCLASS(Blueprintable)
class FGK_API UFGKCosmeticsModeUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFGKCosmeticsModeUtils();

    UFUNCTION(BlueprintCallable)
    static FFGKCosmeticsMode SetCosmeticsModeSlotEnabled(UPARAM(Ref) FFGKCosmeticsMode& CosmeticsMode, EFGKCosmeticEquipSlot Slot, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static FFGKCosmeticsMode SetAllCosmeticsModeSlotsEnabled(UPARAM(Ref) FFGKCosmeticsMode& CosmeticsMode, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCosmeticsModeSlotEnabled(const FFGKCosmeticsMode& CosmeticsMode, EFGKCosmeticEquipSlot Slot);
    
};

