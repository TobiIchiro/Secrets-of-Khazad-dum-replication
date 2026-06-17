#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialExpression.h"
#include "MaterialPackInput.h"
#include "MaterialExpressionPack.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionPack : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialPackInput> Inputs;
    
    UMaterialExpressionPack();

};

