#pragma once
#include "CoreMinimal.h"
#include "MorDataTableRowHandle.h"
#include "MorTipRowHandle.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorTipRowHandle : public FMorDataTableRowHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasRestoredFromSaveData;
    
    FMorTipRowHandle();
};

