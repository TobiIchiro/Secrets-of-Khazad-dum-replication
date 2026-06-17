#pragma once
#include "CoreMinimal.h"
#include "FGKAIConditionBase.h"
#include "MorDeadNPCDetectorConditionState.generated.h"

class AMorAIController;
class UMorDeadNPCDetector;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorDeadNPCDetectorConditionState : public UFGKAIConditionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorAIController* MorAIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorDeadNPCDetector* DetectorComponent;
    
public:
    UMorDeadNPCDetectorConditionState();

};

