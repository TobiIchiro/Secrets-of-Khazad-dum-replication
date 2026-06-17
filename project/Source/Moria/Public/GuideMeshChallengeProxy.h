#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ChallengeProxy.h"
#include "GuideMeshChallengeProxy.generated.h"

class AActor;
class AMorGuideMeshChallenge;
class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class MORIA_API AGuideMeshChallengeProxy : public AChallengeProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Trigger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorGuideMeshChallenge* Challenge;
    
public:
    AGuideMeshChallengeProxy(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void EndOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* Actor, UPrimitiveComponent* PrimitiveComponent1, int32 I);
    
    UFUNCTION(BlueprintCallable)
    void BeginOverlap(UPrimitiveComponent* PrimitiveComponent, AActor* Actor, UPrimitiveComponent* PrimitiveComponent1, int32 I, bool bArg, const FHitResult& HitResult);
    
};

