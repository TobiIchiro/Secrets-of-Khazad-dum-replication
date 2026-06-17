#pragma once
#include "CoreMinimal.h"
#include "MorMinimapWidget.h"
#include "MorDevMinimapWidget.generated.h"

class UMorDevMinimapWorldWidget;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorDevMinimapWidget : public UMorMinimapWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoFocusOnPlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingZoom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorDevMinimapWorldWidget* MinimapWorld;
    
public:
    UMorDevMinimapWidget();

};

