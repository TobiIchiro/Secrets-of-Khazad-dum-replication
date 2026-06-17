#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MorCalloutReticleWidget.generated.h"

class UImage;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCalloutReticleWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* CalloutTargetIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CalloutTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CalloutTargetDistance;
    
    UMorCalloutReticleWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCalloutTargetText(FText& Text, bool bFilterText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCalloutTargetIcon(UTexture2D* Icon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetCalloutTargetDistance(FText& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FadeIn();
    
};

