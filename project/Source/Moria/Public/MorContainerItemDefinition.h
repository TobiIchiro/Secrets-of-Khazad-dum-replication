#pragma once
#include "CoreMinimal.h"
#include "MorItemDefinition.h"
#include "MorStorageRowHandle.h"
#include "MorContainerItemDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorContainerItemDefinition : public FMorItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorStorageRowHandle StorageRowHandle;
    
    FMorContainerItemDefinition();
};

