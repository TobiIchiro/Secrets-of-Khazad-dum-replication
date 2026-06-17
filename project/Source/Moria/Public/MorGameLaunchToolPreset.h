#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorDiscoverySnapshotRowHandle.h"
#include "MorLandmarkRowHandle.h"
#include "MorStartingEquipmentOverrideRowHandle.h"
#include "MorZoneFilterRowHandle.h"
#include "MorGameLaunchToolPreset.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorGameLaunchToolPreset : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideSeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorZoneFilterRowHandle ZoneFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorLandmarkRowHandle StartLandmark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorStartingEquipmentOverrideRowHandle StartingEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorStartingEquipmentOverrideRowHandle RespawnEquipmentOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDiscoverySnapshotRowHandle DiscoverySnapshot;
    
    FMorGameLaunchToolPreset();
};

