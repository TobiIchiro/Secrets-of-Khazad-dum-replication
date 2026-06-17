#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "MorSaveSystemPieUserSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class MORIA_API UMorSaveSystemPieUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UMorSaveSystemPieUserSettings();

};

