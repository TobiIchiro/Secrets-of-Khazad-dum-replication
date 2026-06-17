#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "MorAutoUpdateBubbleCatalogOptions.h"
#include "MorDeveloperUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class MORIA_API UMorDeveloperUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAutoUpdateBubbleCatalogOptions AutoUpdateBubbleCatalog;
    
    UMorDeveloperUserSettings();

};

