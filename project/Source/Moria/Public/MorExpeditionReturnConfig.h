#pragma once
#include "CoreMinimal.h"
#include "EMorExpeditionPlayerReturnPlacement.h"
#include "MorExpeditionReturnConfig.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorExpeditionReturnConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorExpeditionPlayerReturnPlacement PlayerPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapTableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportMapTableRadius;
    
    FMorExpeditionReturnConfig();
};

