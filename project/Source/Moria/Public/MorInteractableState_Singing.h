#pragma once
#include "CoreMinimal.h"
#include "MorInteractableState.h"
#include "MorSongInstanceData.h"
#include "MorInteractableState_Singing.generated.h"

class ACharacter;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInteractableState_Singing : public UMorInteractableState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* CharInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FinishEvenIfAborted;
    
public:
    UMorInteractableState_Singing();

protected:
    UFUNCTION(BlueprintCallable)
    void SongEnded(bool bIsAborted, uint8 EndedSongID, const FMorSongInstanceData& SongInstanceData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    uint8 GetSongID();
    
};

