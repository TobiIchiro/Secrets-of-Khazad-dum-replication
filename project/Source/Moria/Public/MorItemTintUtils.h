#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FGKCosmeticItemEffect.h"
#include "MorItemTintRowHandle.h"
#include "MorItemTintUtils.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorItemTintUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorItemTintUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFGKCosmeticItemEffect TintRowHandleToCosmeticEffect(const FMorItemTintRowHandle& TintRowHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMorItemTintRowHandle CosmeticEffectToTintRowHandle(const FFGKCosmeticItemEffect& CosmeticEffect);
    
};

