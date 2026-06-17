#pragma once
#include "CoreMinimal.h"
#include "MorCachedInteractionWidgets.generated.h"

class UMorInteractionWidget;

USTRUCT(BlueprintType)
struct MORIA_API FMorCachedInteractionWidgets {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorInteractionWidget*> InteractionWidgets;
    
public:
    FMorCachedInteractionWidgets();
};

