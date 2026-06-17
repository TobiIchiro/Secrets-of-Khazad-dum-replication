#pragma once
#include "CoreMinimal.h"
#include "MorBrewRowHandle.h"
#include "MorConsumableItemBase.h"
#include "MorBrew.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorBrew : public AMorConsumableItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorBrewRowHandle BrewRowHandle;
    
    AMorBrew(const FObjectInitializer& ObjectInitializer);

};

