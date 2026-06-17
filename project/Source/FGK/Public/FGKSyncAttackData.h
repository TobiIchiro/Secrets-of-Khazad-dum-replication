#pragma once
#include "CoreMinimal.h"
#include "EFGKSyncAttackAnimType.h"
#include "FGKSyncAttackData.generated.h"

class UAnimMontage;
class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FGK_API FFGKSyncAttackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFGKSyncAttackAnimType, UAnimMontage*> Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CameraAnim;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 AttackDirections;
    
    FFGKSyncAttackData();
};

