#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "FGKActionEffect_LookAt.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKActionEffect_LookAt : public UFGKActionEffect {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LookAtTargetBlackboardKey;
    
public:
    UFGKActionEffect_LookAt();

};

