#pragma once
#include "CoreMinimal.h"
#include "LevelSequencePlayer.h"
#include "MovieSceneSequencePlayer.h"
#include "FGKLevelSequencePlayerFSM.generated.h"

class AFGKLevelSequenceActor;
class UFGKLevelSequencePlayerFSM;
class UFGKSequencerState;
class ULevelSequence;
class UObject;

UCLASS(Blueprintable)
class FGK_API UFGKLevelSequencePlayerFSM : public ULevelSequencePlayer {
    GENERATED_BODY()
public:
    UFGKLevelSequencePlayerFSM(const FObjectInitializer& ObjectInitializer);


    UFUNCTION(BlueprintCallable)
    void SetState(UFGKSequencerState* InParentState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKSequencerState* GetState() const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFGKLevelSequencePlayerFSM* CreateFGKLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, AFGKLevelSequenceActor*& OutActor, FName Label);
    
};

