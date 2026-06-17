#pragma once
#include "CoreMinimal.h"
#include "FGKMontageState.h"
#include "FGKFaceBodyMontageState.generated.h"

class UAnimInstance;
class UAnimMontage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FGK_API UFGKFaceBodyMontageState : public UFGKMontageState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimInstance* FaceAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* CurrentFaceMontage;
    
public:
    UFGKFaceBodyMontageState();

};

