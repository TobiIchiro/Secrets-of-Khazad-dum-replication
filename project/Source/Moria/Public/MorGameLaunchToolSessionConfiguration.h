#pragma once
#include "CoreMinimal.h"
#include "MorWorldLayoutCustomConfiguration.h"
#include "MorGameLaunchToolSessionConfiguration.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorGameLaunchToolSessionConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartingEquipmentRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RespawnEquipmentOverrideRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DiscoverySnapshotRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWorldLayoutCustomConfiguration WorldLayout;
    
    FMorGameLaunchToolSessionConfiguration();
};

