#pragma once
#include "CoreMinimal.h"
#include "MontageGameplayAbility.h"
#include "CraftGameplayAbility.generated.h"

class UMorCraftingComponent;

UCLASS(Blueprintable)
class MORIA_API UCraftGameplayAbility : public UMontageGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorCraftingComponent* CraftingComponent;
    
public:
    UCraftGameplayAbility();

};

