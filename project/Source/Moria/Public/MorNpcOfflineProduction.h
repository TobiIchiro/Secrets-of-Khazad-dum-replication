#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorOfflineProductionParameters.h"
#include "MorNpcOfflineProduction.generated.h"

class AMorReceptacle;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorNpcOfflineProduction : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOfflineProductionParameters Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMorReceptacle*> AllReceptacles;
    
public:
    UMorNpcOfflineProduction();

};

