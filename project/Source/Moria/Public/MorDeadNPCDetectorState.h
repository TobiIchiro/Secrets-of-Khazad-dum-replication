#pragma once
#include "CoreMinimal.h"
#include "FGKBehaviorState.h"
#include "MorDeadNPCDetectorState.generated.h"

class AMorAIController;
class UMorDeadNPCDetector;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorDeadNPCDetectorState : public UFGKBehaviorState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorAIController* MorAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorDeadNPCDetector* DetectorComponent;
    
public:
    UMorDeadNPCDetectorState();

};

