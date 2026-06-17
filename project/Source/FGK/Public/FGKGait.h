#pragma once
#include "CoreMinimal.h"
#include "EFGKGait.h"
#include "FGKGait.generated.h"

USTRUCT(BlueprintType)
struct FFGKGait {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKGait Gait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Walking_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Running_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Sprinting_;
    
public:
    FGK_API FFGKGait();
};

