#pragma once
#include "CoreMinimal.h"
#include "MorArmorRowHandle.h"
#include "MorDamageTargetInterface.h"
#include "MorItemBase.h"
#include "MorArmor.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable)
class MORIA_API AMorArmor : public AMorItemBase, public IMorDamageTargetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorArmorRowHandle RowHandle;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterial;
    
public:
    AMorArmor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

