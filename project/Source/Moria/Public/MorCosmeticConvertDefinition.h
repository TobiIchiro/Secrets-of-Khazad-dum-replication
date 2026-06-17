#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorRequiredRecipeMaterial.h"
#include "MorCosmeticConvertDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorCosmeticConvertDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidConversion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorRequiredRecipeMaterial> RequiredMaterials;
    
    FMorCosmeticConvertDefinition();
};

