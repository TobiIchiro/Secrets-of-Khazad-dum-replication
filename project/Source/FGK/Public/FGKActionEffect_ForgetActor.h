#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect.h"
#include "FGKActionEffect_ForgetActor.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKActionEffect_ForgetActor : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForgetAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlackboardKeyName;
    
public:
    UFGKActionEffect_ForgetActor();

};

