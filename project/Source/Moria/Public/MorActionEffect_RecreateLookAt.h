#pragma once
#include "CoreMinimal.h"
#include "FGKActionEffect_LookAt.h"
#include "MorActionEffect_RecreateLookAt.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorActionEffect_RecreateLookAt : public UFGKActionEffect_LookAt {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BehaviorPoint_BlackboardKey;
    
public:
    UMorActionEffect_RecreateLookAt();

};

