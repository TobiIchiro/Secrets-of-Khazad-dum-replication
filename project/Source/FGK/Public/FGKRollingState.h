#pragma once
#include "CoreMinimal.h"
#include "FGKMontageState.h"
#include "FGKRollingState.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKRollingState : public UFGKMontageState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFaceMoveDirectionOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationSpeedScale;
    
    UFGKRollingState();

};

