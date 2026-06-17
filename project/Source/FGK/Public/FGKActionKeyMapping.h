#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "FGKActionKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct FFGKActionKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputActionKeyMapping> ActionMappings;
    
    FGK_API FFGKActionKeyMapping();
};

