#pragma once
#include "CoreMinimal.h"
#include "PopUpButtonData.generated.h"

USTRUCT(BlueprintType)
struct FPopUpButtonData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ButtonIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ButtonTextToOverride;
    
    MORIA_API FPopUpButtonData();
};

