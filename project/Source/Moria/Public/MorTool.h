#pragma once
#include "CoreMinimal.h"
#include "MorDamageSourceInterface.h"
#include "MorItemBase.h"
#include "MorToolRowHandle.h"
#include "MorTool.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorTool : public AMorItemBase, public IMorDamageSourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorToolRowHandle RowHandle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayInterval;
    
public:
    AMorTool(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

