#pragma once
#include "CoreMinimal.h"
#include "WorldTargetAbility.h"
#include "MorGameplayAbility_Deconstruct.generated.h"

class AActor;

UCLASS(Blueprintable, HideDropdown)
class MORIA_API UMorGameplayAbility_Deconstruct : public UWorldTargetAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoTargetText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotDwarfConstructionText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LastHitActor;
    
public:
    UMorGameplayAbility_Deconstruct();

private:
    UFUNCTION(BlueprintCallable)
    void SetFilteredHudParams(bool bSuccess, const FText& Text);
    
};

