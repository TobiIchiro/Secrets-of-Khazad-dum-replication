#pragma once
#include "CoreMinimal.h"
#include "MorInteractionBase.h"
#include "Templates/SubclassOf.h"
#include "MorInteraction.generated.h"

class UFGKUserWidget;

USTRUCT(BlueprintType)
struct MORIA_API FMorInteraction : public FMorInteractionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteractionBase HoldInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKUserWidget> CustomWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortPriority;
    
    FMorInteraction();
};

