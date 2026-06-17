#pragma once
#include "CoreMinimal.h"
#include "FGKMontageState_Mantle.h"
#include "MorMontageState_MantleFromRope.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorMontageState_MantleFromRope : public UFGKMontageState_Mantle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeOnRopeBeforeMantle;
    
public:
    UMorMontageState_MantleFromRope();

};

