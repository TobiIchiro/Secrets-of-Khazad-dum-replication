#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EQSTestingPawn.h"
#include "Engine/EngineTypes.h"
#include "MorAIEQSTestingPawn.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorAIEQSTestingPawn : public AEQSTestingPawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RunQueryTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenQueryRuns;
    
public:
    AMorAIEQSTestingPawn(const FObjectInitializer& ObjectInitializer);

};

