#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "MorActionEffect_TargetLieDownFacing.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_TargetLieDownFacing : public UFGKActionEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SleepBehaviorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetBlackboardKey;
    
public:
    UMorActionEffect_TargetLieDownFacing();

};

