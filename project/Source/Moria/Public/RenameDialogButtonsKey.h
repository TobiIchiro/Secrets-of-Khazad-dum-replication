#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "EMorRenameDialogButtonsTypes.h"
#include "RenameDialogButtonsKey.generated.h"

USTRUCT(BlueprintType)
struct FRenameDialogButtonsKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorRenameDialogButtonsTypes ButtonType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> ButtonsKeys;
    
    MORIA_API FRenameDialogButtonsKey();
};

