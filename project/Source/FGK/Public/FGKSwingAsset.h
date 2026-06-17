#pragma once
#include "CoreMinimal.h"
#include "EFGKSwingType.h"
#include "FGKLocomotionAsset.h"
#include "FGKSwingAsset.generated.h"

USTRUCT(BlueprintType)
struct FGK_API FFGKSwingAsset : public FFGKLocomotionAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKSwingType SwingType;
    
    FFGKSwingAsset();
};

