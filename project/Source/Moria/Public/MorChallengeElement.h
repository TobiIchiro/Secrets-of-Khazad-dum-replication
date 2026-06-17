#pragma once
#include "CoreMinimal.h"
#include "SoftItemCount.h"
#include "MorChallengeRowHandle.h"
#include "MorToolRowHandle.h"
#include "ProxyLocator.h"
#include "MorChallengeElement.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorChallengeElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FProxyLocator ProxyLocator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSoftItemCount> RequiredItemCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorToolRowHandle> RequiredToolRowHandles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorChallengeRowHandle ChallengeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPreserveSaveData;
    
    FMorChallengeElement();
};

