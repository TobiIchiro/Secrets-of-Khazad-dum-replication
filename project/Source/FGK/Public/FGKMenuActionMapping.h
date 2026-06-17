#pragma once
#include "CoreMinimal.h"
#include "EMenuAction.h"
#include "FGKMenuActionMapping.generated.h"

USTRUCT(BlueprintType)
struct FFGKMenuActionMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMenuAction MenuAction;
    
    FGK_API FFGKMenuActionMapping();
};

