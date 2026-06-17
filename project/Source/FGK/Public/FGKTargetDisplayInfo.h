#pragma once
#include "CoreMinimal.h"
#include "EFGKTargetResult.h"
#include "FGKTargetDisplayInfo.generated.h"

class UFGKTargetableComponent;
class UTexture2D;

USTRUCT(BlueprintType)
struct FFGKTargetDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFGKTargetableComponent> Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKTargetResult Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DebugText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    FGK_API FFGKTargetDisplayInfo();
};

