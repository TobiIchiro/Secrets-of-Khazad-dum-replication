#pragma once
#include "CoreMinimal.h"
#include "FGKState.h"
#include "FGKSequencerState.generated.h"

class ULevelSequence;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKSequencerState : public UFGKState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnAllClients;
    
public:
    UFGKSequencerState();

};

