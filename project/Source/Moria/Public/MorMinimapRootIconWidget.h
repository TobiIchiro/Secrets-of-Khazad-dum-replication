#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "Components/Widget.h"
#include "MorMinimapRootIconWidget.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorMinimapRootIconWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FarAwayBrush;
    
    UMorMinimapRootIconWidget();

};

