#pragma once
#include "CoreMinimal.h"
#include "MorReplicatedManager.h"
#include "MorLevelSequenceManager.generated.h"

class AMorLevelSequenceActor;

UCLASS(Blueprintable)
class MORIA_API AMorLevelSequenceManager : public AMorReplicatedManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AMorLevelSequenceActor*> AllSequences;
    
public:
    AMorLevelSequenceManager(const FObjectInitializer& ObjectInitializer);

};

