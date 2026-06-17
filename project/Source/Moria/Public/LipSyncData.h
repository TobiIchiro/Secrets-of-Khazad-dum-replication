#pragma once
#include "CoreMinimal.h"
#include "LipSyncData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FLipSyncData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAnimSequence>> LipSyncAnimations;
    
    MORIA_API FLipSyncData();
};

