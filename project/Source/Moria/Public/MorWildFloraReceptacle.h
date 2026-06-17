#pragma once
#include "CoreMinimal.h"
#include "MorFloraReceptacle.h"
#include "MorWildFloraReceptacle.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class MORIA_API AMorWildFloraReceptacle : public AMorFloraReceptacle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> FloraMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldGrowOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GrowInsideHearthRadius;
    
public:
    AMorWildFloraReceptacle(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnSleepAdvance(float JumpedGameTimeinSeconds, float JumpedRealTimeinSeconds);
    
};

