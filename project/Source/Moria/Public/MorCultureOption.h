#pragma once
#include "CoreMinimal.h"
#include "FGKOptionString.h"
#include "MorCultureOption.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorCultureOption : public UFGKOptionString {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FallbackCulture;
    
public:
    UMorCultureOption();

};

