#pragma once
#include "CoreMinimal.h"
#include "FGKCondition.h"
#include "MorPlayerControllerCondition_IsInCinematicMode.generated.h"

class APawn;
class APlayerController;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorPlayerControllerCondition_IsInCinematicMode : public UFGKCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoredMoveInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
public:
    UMorPlayerControllerCondition_IsInCinematicMode();

};

