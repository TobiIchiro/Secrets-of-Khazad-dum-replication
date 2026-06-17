#pragma once
#include "CoreMinimal.h"
#include "MontageGameplayAbility.h"
#include "MorSongInstanceData.h"
#include "MorGameplayAbility_NpcMiningSong.generated.h"

class UAnimMontage;

UCLASS(Abstract, Blueprintable)
class MORIA_API UMorGameplayAbility_NpcMiningSong : public UMontageGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> SingingMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* MontageToUse;
    
public:
    UMorGameplayAbility_NpcMiningSong();

protected:
    UFUNCTION(BlueprintCallable)
    void SongEnded(bool bIsAborted, const uint8 SongID, const FMorSongInstanceData& SongInstanceData);
    
};

