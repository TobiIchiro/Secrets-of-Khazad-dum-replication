#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MorDialogueLineTimestamp.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorDialogueLineTimestamp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle LineHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    FMorDialogueLineTimestamp();
};

