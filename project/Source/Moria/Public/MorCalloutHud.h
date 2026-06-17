#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FGKUIScreen.h"
#include "MorCalloutHud.generated.h"

class UMorCalloutReticleWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCalloutHud : public UFGKUIScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorCalloutReticleWidget* ReticleWidget;
    
    UMorCalloutHud();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVignetteLinearColor(FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVignetteColor(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetCalloutTargetText(FText& Text, bool bFilterText);
    
    UFUNCTION(BlueprintCallable)
    void SetCalloutTargetIcon(UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable)
    void SetCalloutTargetDistance(FText& DistanceText);
    
};

