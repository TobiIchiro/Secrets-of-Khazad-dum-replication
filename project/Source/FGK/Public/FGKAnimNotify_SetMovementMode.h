#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FGKAnimNotify.h"
#include "FGKAnimNotify_SetMovementMode.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class FGK_API UFGKAnimNotify_SetMovementMode : public UFGKAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetToDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> MovementMode;
    
public:
    UFGKAnimNotify_SetMovementMode();

};

