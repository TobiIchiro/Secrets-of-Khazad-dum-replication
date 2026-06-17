#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TargetPoint.h"
#include "FGKLocationIndicator.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKLocationIndicator : public ATargetPoint {
    GENERATED_BODY()
public:
    AFGKLocationIndicator(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    FVector GetScreenLocation() const;
    
};

