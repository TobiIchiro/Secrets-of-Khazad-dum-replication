#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "MorActionEffect_MonumentProgress.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_MonumentProgress : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName_MonumentBehaviorPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProgressAmount;
    
public:
    UMorActionEffect_MonumentProgress();

};

