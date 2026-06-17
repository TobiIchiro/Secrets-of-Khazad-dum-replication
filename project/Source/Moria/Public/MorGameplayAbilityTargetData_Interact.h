#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetData.h"
#include "MorGameplayAbilityTargetData_Interact.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MORIA_API FMorGameplayAbilityTargetData_Interact : public FGameplayAbilityTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InteractionHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> InteractableTargetPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    FMorGameplayAbilityTargetData_Interact();
};

