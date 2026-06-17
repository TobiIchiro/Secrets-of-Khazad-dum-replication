#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "MorActiveEffectUIInfo.generated.h"

class AActor;
class UGameplayEffect;
class UMorGameplayEffectUIData;

UCLASS(Blueprintable)
class MORIA_API UMorActiveEffectUIInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorGameplayEffectUIData* UIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* EffectInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Stacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInhibited;
    
    UMorActiveEffectUIInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCustomProgressPercentage() const;
    
};

