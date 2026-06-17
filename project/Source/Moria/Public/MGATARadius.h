#pragma once
#include "CoreMinimal.h"
#include "MoriaGameplayAbilityTargetActor.h"
#include "MGATARadius.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMGATARadius : public AMoriaGameplayAbilityTargetActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
public:
    AMGATARadius(const FObjectInitializer& ObjectInitializer);

};

