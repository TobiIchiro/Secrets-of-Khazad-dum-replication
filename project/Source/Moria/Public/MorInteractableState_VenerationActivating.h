#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState_Ability.h"
#include "MorSongInstanceData.h"
#include "Templates/SubclassOf.h"
#include "MorInteractableState_VenerationActivating.generated.h"

class ACharacter;
class UGameplayAbility;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableState_VenerationActivating : public UMorInteractableState_Ability {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* CharInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FinishEvenIfAborted;
    
public:
    UMorInteractableState_VenerationActivating();

protected:
    UFUNCTION(BlueprintCallable)
    void SongEnded(bool bIsAborted, uint8 SongID, const FMorSongInstanceData& SongInstanceData);
    
    UFUNCTION(BlueprintCallable)
    void JoinSongExternal(ACharacter* TargetCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UGameplayAbility> GetGameplayAbility();
    
};

