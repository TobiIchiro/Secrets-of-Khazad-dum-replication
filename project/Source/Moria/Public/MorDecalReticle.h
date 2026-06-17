#pragma once
#include "CoreMinimal.h"
#include "Engine/DecalActor.h"
#include "MorDecalReticle.generated.h"

class UDecalComponent;

UCLASS(Blueprintable)
class MORIA_API AMorDecalReticle : public ADecalActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PulseRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PulseSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDecalComponent* DecalComp;
    
public:
    AMorDecalReticle(const FObjectInitializer& ObjectInitializer);

};

