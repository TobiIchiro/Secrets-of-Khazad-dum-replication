#pragma once
#include "CoreMinimal.h"
#include "GATA_LineTrace.h"
#include "MGATACalloutReticle.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMGATACalloutReticle : public AGATA_LineTrace {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTargetCharacterAngle;
    
public:
    AMGATACalloutReticle(const FObjectInitializer& ObjectInitializer);

};

