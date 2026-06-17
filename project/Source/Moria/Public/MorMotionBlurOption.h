#pragma once
#include "CoreMinimal.h"
#include "FGKOptionBool.h"
#include "MorMotionBlurOption.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorMotionBlurOption : public UFGKOptionBool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MotionBlurAmount;
    
public:
    UMorMotionBlurOption();

};

