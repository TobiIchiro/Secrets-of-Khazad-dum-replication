#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateBrush.h"
#include "MorPlatformUiConfig.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorPlatformUiConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSlateBrush> PlatformIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FallbackPlatformIcon;
    
    UMorPlatformUiConfig();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetPlatformIconByString(const FString& PlatformName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetPlatformIcon(const FName& PlatformName) const;
    
};

