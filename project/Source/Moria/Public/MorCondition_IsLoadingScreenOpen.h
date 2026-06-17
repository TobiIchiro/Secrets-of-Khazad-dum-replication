#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "MorCondition_IsLoadingScreenOpen.generated.h"

class UMorLoadingScreenManager;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCondition_IsLoadingScreenOpen : public UFGKCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorLoadingScreenManager* LoadingScreenManager;
    
public:
    UMorCondition_IsLoadingScreenOpen();

};

