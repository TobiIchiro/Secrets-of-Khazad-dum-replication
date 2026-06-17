#pragma once
#include "CoreMinimal.h"
#include "FGKCharacterState.h"
#include "MorAimState.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMorAimState : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxYawFromAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitch;
    
public:
    UMorAimState();

};

