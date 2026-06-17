#pragma once
#include "CoreMinimal.h"
#include "GATA_LineTrace.h"
#include "MGATADeconstructReticle.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMGATADeconstructReticle : public AGATA_LineTrace {
    GENERATED_BODY()
public:
    AMGATADeconstructReticle(const FObjectInitializer& ObjectInitializer);

};

