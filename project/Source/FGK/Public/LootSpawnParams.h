#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LootSpawnParams.generated.h"

USTRUCT(BlueprintType)
struct FLootSpawnParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LaunchImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ObjectIndex;
    
    FGK_API FLootSpawnParams();
};

