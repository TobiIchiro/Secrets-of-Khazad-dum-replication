#pragma once
#include "CoreMinimal.h"
#include "EFGKStance.h"
#include "FGKStance.generated.h"

USTRUCT(BlueprintType)
struct FFGKStance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKStance Stance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Standing_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Crouching_;
    
public:
    FGK_API FFGKStance();
};

