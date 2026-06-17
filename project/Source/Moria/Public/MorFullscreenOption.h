#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "FGKOptionUserSetting.h"
#include "MorFullscreenOption.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorFullscreenOption : public UFGKOptionUserSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EWindowMode::Type>, FText> LocalizedScreenModeTexts;
    
    UMorFullscreenOption();

};

