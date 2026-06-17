#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorGameplayAbility_RangedAttack.h"
#include "Templates/SubclassOf.h"
#include "MorGameplayAbility_ChargeThrowItem.generated.h"

class AMorDroppedItem;
class UFGKUIScreen;

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_ChargeThrowItem : public UMorGameplayAbility_RangedAttack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinThrowForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxThrowForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MinSpinForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MaxSpinForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorDroppedItem> DropItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ThrowSourceSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ThrowMontageSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFGKUIScreen> HudClass;
    
public:
    UMorGameplayAbility_ChargeThrowItem();

protected:
    UFUNCTION(BlueprintCallable)
    void OnScreenHidden(UFGKUIScreen* Screen);
    
    UFUNCTION(BlueprintCallable)
    void CancelFromTagAdded();
    
};

