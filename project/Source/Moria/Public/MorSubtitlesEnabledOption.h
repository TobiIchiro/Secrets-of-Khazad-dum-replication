#pragma once
#include "CoreMinimal.h"
#include "FGKOptionString.h"
#include "EMorSubtitleOptions.h"
#include "MorSubtitlesEnabledOption.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorSubtitlesEnabledOption : public UFGKOptionString {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMorSubtitleOptions, FText> SubtitleOptionNames;
    
public:
    UMorSubtitlesEnabledOption();

};

