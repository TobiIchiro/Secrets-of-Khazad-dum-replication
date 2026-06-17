#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGKCameraInterestSpline.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKCameraInterestSpline : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadZone;
    
public:
    AFGKCameraInterestSpline(const FObjectInitializer& ObjectInitializer);

};

