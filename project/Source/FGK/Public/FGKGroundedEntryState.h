#pragma once
#include "CoreMinimal.h"
#include "EFGKGroundedEntryState.h"
#include "FGKGroundedEntryState.generated.h"

USTRUCT(BlueprintType)
struct FFGKGroundedEntryState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKGroundedEntryState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool None_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Roll_;
    
public:
    FGK_API FFGKGroundedEntryState();
};

