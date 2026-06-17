#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EMorButtonsTypes.h"
#include "HintButtonsKey.generated.h"

USTRUCT(BlueprintType)
struct FHintButtonsKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorButtonsTypes ButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> ButtonsKeys;
    
    MORIA_API FHintButtonsKey();
};

