#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GameplayCueParameters.h"
#include "MorFXSpawnOnHitActor.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorFXSpawnOnHitActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHitResultValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueParameters GameplayCueParameters;
    
    AMorFXSpawnOnHitActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FHitResult GetPreciseHitResult(const FHitResult& OriginalHitResult);
    
};

