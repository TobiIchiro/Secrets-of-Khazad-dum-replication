#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorSaveClassCompatibilityRecord.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorSaveClassCompatibilityRecord : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> BaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UObject>> BackwardCompatibilityClasses;
    
    FMorSaveClassCompatibilityRecord();
};

