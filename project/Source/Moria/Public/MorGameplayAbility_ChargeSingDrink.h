#pragma once
#include "CoreMinimal.h"
#include "MorGameplayAbility_ChargeSing.h"
#include "MorMontageStartTimeSettings.h"
#include "MorGameplayAbility_ChargeSingDrink.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class MORIA_API UMorGameplayAbility_ChargeSingDrink : public UMorGameplayAbility_ChargeSing {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* EmptyMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EmptySection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMontageStartTimeSettings EmptyMontageStartSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LateIncompleteTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> LateIncompleteMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LateIncompleteSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMontageStartTimeSettings LateIncompleteStartSettings;
    
public:
    UMorGameplayAbility_ChargeSingDrink();

};

