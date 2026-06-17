#pragma once
#include "CoreMinimal.h"
#include "PhysicalMaterials/PhysicalMaterial.h"
#include "FGKPhysicalMaterial.generated.h"

class UFGKPhysicalProperties;

UCLASS(Blueprintable, CollapseCategories)
class FGK_API UFGKPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKPhysicalProperties* PhysicalProperties;
    
    UFGKPhysicalMaterial();

};

