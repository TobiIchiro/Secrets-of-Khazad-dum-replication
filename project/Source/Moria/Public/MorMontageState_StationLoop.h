#pragma once
#include "CoreMinimal.h"
#include "FGKMontageState.h"
#include "MorMontageState_StationLoop.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorMontageState_StationLoop : public UFGKMontageState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoopSection;
    
public:
    UMorMontageState_StationLoop();

};

