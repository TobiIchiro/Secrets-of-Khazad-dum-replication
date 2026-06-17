#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorPlatformUiManager.generated.h"

class UMorPlatformUiConfig;
class UMorPlatformUiManager;

UCLASS(Blueprintable, Config=Game)
class MORIA_API UMorPlatformUiManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ConfigAsyncLoadDelay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMorPlatformUiConfig> PlatformUiConfigAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorPlatformUiConfig* PlatformUiConfig;
    
public:
    UMorPlatformUiManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorPlatformUiConfig* GetUiConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMorPlatformUiConfig* GetPlatformUiConfig(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UMorPlatformUiManager* Get(const UObject* WorldContext);
    
};

