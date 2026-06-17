#pragma once
#include "CoreMinimal.h"
#include "MontageGameplayAbility.h"
#include "MusicGameplayAbility.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMusicGameplayAbility : public UMontageGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NotifyDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBars;
    
public:
    UMusicGameplayAbility();

private:
    UFUNCTION(BlueprintCallable)
    void OnWaitFinish();
    
};

