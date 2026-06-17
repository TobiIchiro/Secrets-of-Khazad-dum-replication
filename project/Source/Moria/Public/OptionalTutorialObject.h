#pragma once
#include "CoreMinimal.h"
#include "ETutorialObjectType.h"
#include "MorConstructionRecipeRowHandle.h"
#include "OptionalTutorialObject.generated.h"

class AMorItemBase;

USTRUCT(BlueprintType)
struct MORIA_API FOptionalTutorialObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMorItemBase> ItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConstructionRecipeRowHandle ConstructionRecipeRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialObjectType TutorialObjectType;
    
    FOptionalTutorialObject();
};

