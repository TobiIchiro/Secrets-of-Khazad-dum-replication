#pragma once
#include "CoreMinimal.h"
#include "FGKUIScreenConfig.h"
#include "FGKUITab.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FGKUITOOLKIT_API FFGKUITab {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> WidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKUIScreenConfig TabConfig;
    
    FFGKUITab();
};

