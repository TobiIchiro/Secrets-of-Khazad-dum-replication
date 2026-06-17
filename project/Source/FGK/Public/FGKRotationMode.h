#pragma once
#include "CoreMinimal.h"
#include "EFGKRotationMode.h"
#include "FGKRotationMode.generated.h"

USTRUCT(BlueprintType)
struct FFGKRotationMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKRotationMode RotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool VelocityDirection_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LookingDirection_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Aiming_;
    
public:
    FGK_API FFGKRotationMode();
};

