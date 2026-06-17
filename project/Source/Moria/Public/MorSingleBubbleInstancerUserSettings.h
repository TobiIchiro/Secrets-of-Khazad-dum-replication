#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "EMorSingleBubbleInstancerSeedType.h"
#include "MorBubbleCatalogUpdateOptions.h"
#include "MorDiscoverySnapshotRowHandle.h"
#include "MorStartingEquipmentOverrideRowHandle.h"
#include "MorZoneRowHandle.h"
#include "MorSingleBubbleInstancerUserSettings.generated.h"

class AGameModeBase;
class UWorld;

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class MORIA_API UMorSingleBubbleInstancerUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoActivate: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdateBubbleCatalog: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorBubbleCatalogUpdateOptions BubbleCatalogUpdateOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> OverrideMainLevel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGameModeBase> OverrideGameMode;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorZoneRowHandle ZoneRow;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorSingleBubbleInstancerSeedType SeedType;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CustomSeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorStartingEquipmentOverrideRowHandle StartingEquipmentRow;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorStartingEquipmentOverrideRowHandle RespawnEquipmentOverrideRow;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDiscoverySnapshotRowHandle DiscoverySnapshotRow;
    
    UMorSingleBubbleInstancerUserSettings();

};

