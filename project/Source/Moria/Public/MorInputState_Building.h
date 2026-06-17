#pragma once
#include "CoreMinimal.h"
#include "MorInputState_Character.h"
#include "MorInputState_Building.generated.h"

class UMorBuildingComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorInputState_Building : public UMorInputState_Character {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorBuildingComponent* BuildingComp;
    
public:
    UMorInputState_Building();

};

