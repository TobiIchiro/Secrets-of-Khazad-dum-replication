#pragma once
#include "CoreMinimal.h"
#include "SubtitleData.generated.h"

USTRUCT(BlueprintType)
struct FSubtitleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> VOTexts;
    
    MORIA_API FSubtitleData();
};

