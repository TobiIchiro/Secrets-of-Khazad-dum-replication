#pragma once
#include "CoreMinimal.h"
#include "Perception/AIPerceptionComponent.h"
#include "FGKAIPerceptionComponent.generated.h"

class UAISenseConfig;
class UFGKAISenseConfigsOverride;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKAIPerceptionComponent : public UAIPerceptionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullAwarenessBufferSeconds;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> OriginalConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKAISenseConfigsOverride*> RequestedConfigOverridesStack;
    
public:
    UFGKAIPerceptionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveSenseConfigsOverride(UFGKAISenseConfigsOverride* SenseConfigsOverride);
    
};

