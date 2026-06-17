#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "FGKWidgetDistanceVisibilityConfig.generated.h"

USTRUCT(BlueprintType)
struct FGKUITOOLKIT_API FFGKWidgetDistanceVisibilityConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility FadedInVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility FadedOutVisibility;
    
    FFGKWidgetDistanceVisibilityConfig();
};

