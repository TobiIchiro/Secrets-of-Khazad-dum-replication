#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "MorSingleBubbleInstancerSettings.generated.h"

class AGameModeBase;

UCLASS(Blueprintable, DefaultConfig, Config=Editor)
class MORIA_API UMorSingleBubbleInstancerSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AGameModeBase> GameMode;
    
    UMorSingleBubbleInstancerSettings();

};

