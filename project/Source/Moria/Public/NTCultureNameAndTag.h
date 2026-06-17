#pragma once
#include "CoreMinimal.h"
#include "NTCultureNameAndTag.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FNTCultureNameAndTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FNTCultureNameAndTag();
};

