#pragma once
#include "CoreMinimal.h"
#include "FGKAISquad.h"
#include "MorAISquad.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorAISquad : public AFGKAISquad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCommunicateAwarenessEveryTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRangeToRecieveAwarenessOfTarget;
    
    AMorAISquad(const FObjectInitializer& ObjectInitializer);

};

