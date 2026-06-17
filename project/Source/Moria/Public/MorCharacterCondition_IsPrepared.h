#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "MorCharacterCondition_IsPrepared.generated.h"

class AMorCharacter;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterCondition_IsPrepared : public UFGKCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bClosingLoadingScreen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorCharacter* Character;
    
public:
    UMorCharacterCondition_IsPrepared();

};

