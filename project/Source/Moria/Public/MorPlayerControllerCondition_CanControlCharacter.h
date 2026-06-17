#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "MorPlayerControllerCondition_CanControlCharacter.generated.h"

class AMorPlayerController;
class APawn;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorPlayerControllerCondition_CanControlCharacter : public UFGKCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
public:
    UMorPlayerControllerCondition_CanControlCharacter();

};

