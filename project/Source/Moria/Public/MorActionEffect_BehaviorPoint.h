#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "MorActionEffect_BehaviorPoint.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_BehaviorPoint : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnmark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
public:
    UMorActionEffect_BehaviorPoint();

};

