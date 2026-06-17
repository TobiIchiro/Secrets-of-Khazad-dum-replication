#pragma once
#include "CoreMinimal.h"
#include "FGKDataTableRowHandle.generated.h"

USTRUCT(BlueprintType)
struct FGKSTATICDATA_API FFGKDataTableRowHandle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FName RowName;
    
public:
    FFGKDataTableRowHandle();
};

