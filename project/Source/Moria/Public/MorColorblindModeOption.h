#pragma once
#include "CoreMinimal.h"
#include "FGKOptionString.h"
#include "MorColorblindModeOptionValue.h"
#include "MorColorblindModeOption.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorColorblindModeOption : public UFGKOptionString {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorColorblindModeOptionValue> Modes;
    
public:
    UMorColorblindModeOption();

};

