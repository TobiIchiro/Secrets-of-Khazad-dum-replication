#pragma once
#include "CoreMinimal.h"
#include "MorAIController.h"
#include "WatcherAIController.generated.h"

class AWatcherCharacter;
class UWatcherTargetingComponent;

UCLASS(Blueprintable)
class MORIA_API AWatcherAIController : public AMorAIController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWatcherCharacter* Watcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UWatcherTargetingComponent*> TentacleTargetingComponents;
    
public:
    AWatcherAIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWatcherTargetingComponent* GetTentacleTargetingComponent(const int32 TentacleIndex) const;
    
};

