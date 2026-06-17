#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActionEffectTiming.h"
#include "Templates/SubclassOf.h"
#include "FGKActionEffect.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKActionEffect : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionEffectTiming Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> OwnerClass;
    
    UFGKActionEffect();

};

