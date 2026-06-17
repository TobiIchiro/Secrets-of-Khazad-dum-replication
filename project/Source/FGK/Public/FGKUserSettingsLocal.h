#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "InputCoreTypes.h"
#include "FGKLoadedMappableConfigPair.h"
#include "FGKUserSettingsLocal.generated.h"

class UPlayerMappableInputConfig;

UCLASS(Blueprintable, Config=Engine)
class FGK_API UFGKUserSettingsLocal : public UGameUserSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputConfigName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKLoadedMappableConfigPair> RegisteredInputConfigs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FKey> CustomKeyboardConfig;
    
public:
    UFGKUserSettingsLocal();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayerMappableInputConfig* GetInputConfigByName(FName ConfigName) const;
    
};

