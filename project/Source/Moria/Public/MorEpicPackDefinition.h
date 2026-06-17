#pragma once
#include "CoreMinimal.h"
#include "MorAnyItemRowHandle.h"
#include "MorItemDefinition.h"
#include "MorStorageRowHandle.h"
#include "MorEpicPackDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorEpicPackDefinition : public FMorItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorStorageRowHandle StorageRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAnyItemRowHandle EpicItemHandle;
    
    FMorEpicPackDefinition();
};

