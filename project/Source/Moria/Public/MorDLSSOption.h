#pragma once
#include "CoreMinimal.h"
#include "UDLSSMode.h"
#include "FGKOptionString.h"
#include "MorDLSSOption.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorDLSSOption : public UFGKOptionString {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UDLSSMode, FText> LocalizedDlssModeNames;
    
public:
    UMorDLSSOption();

};

