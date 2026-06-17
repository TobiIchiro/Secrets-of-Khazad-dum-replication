#pragma once
#include "CoreMinimal.h"
#include "EFGKAIAwarenessLevel.h"
#include "FGKActionEffect.h"
#include "FGKActionEffect_GiveAwarenessToMembers.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKActionEffect_GiveAwarenessToMembers : public UFGKActionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetActorKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKAIAwarenessLevel AwarenessLevelToGive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RequestInterval;
    
public:
    UFGKActionEffect_GiveAwarenessToMembers();

};

