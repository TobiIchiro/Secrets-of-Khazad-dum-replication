#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RichInputActionRow.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FRichInputActionRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KBMAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GamepadAction;
    
    FRichInputActionRow();
};

