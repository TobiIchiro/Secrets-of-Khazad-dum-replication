#pragma once
#include "CoreMinimal.h"
#include "FGKOptionUserSetting.h"
#include "MorFrameRateLimitOption.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorFrameRateLimitOption : public UFGKOptionUserSetting {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FText> Options;
    
public:
    UMorFrameRateLimitOption();

};

