#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKMontageState.h"
#include "MorCharacterState_Rope.generated.h"

class ARopeInteractable;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_Rope : public UFGKMontageState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MoveTorchToSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TorchSocketTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARopeInteractable* Rope;
    
public:
    UMorCharacterState_Rope();

};

