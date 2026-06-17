#pragma once
#include "CoreMinimal.h"
#include "FGKInventoryItemFragment.h"
#include "FGKItemFragment_Icon.generated.h"

class UMaterial;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKItemFragment_Icon : public UFGKInventoryItemFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* SubMat;
    
    UFGKItemFragment_Icon();

};

