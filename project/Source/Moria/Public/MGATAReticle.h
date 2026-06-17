#pragma once
#include "CoreMinimal.h"
#include "MoriaGameplayAbilityTargetActor.h"
#include "MGATAReticle.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMGATAReticle : public AMoriaGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfirmInstantly;
    
public:
    AMGATAReticle(const FObjectInitializer& ObjectInitializer);

};

