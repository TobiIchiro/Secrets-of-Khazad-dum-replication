#pragma once
#include "CoreMinimal.h"
#include "FGKBlueprintCheatKey.generated.h"

USTRUCT(BlueprintType)
struct FGKDEBUGMENU_API FFGKBlueprintCheatKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CheatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MenuPath;
    
    FFGKBlueprintCheatKey();
};

