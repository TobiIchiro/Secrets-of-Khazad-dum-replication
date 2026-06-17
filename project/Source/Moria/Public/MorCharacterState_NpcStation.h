#pragma once
#include "CoreMinimal.h"
#include "FGKMotionCorrectionState.h"
#include "MorCharacterState_NpcStation.generated.h"

class UMorAIBehaviorPointComponent;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_NpcStation : public UFGKMotionCorrectionState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoopingSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExitSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorAIBehaviorPointComponent* BehaviorPoint;
    
public:
    UMorCharacterState_NpcStation();

};

