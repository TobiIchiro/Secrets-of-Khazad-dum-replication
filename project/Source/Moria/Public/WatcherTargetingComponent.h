#pragma once
#include "CoreMinimal.h"
#include "FGKAITargetingComponent.h"
#include "WatcherTargetingComponent.generated.h"

class AWatcherCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UWatcherTargetingComponent : public UFGKAITargetingComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWatcherCharacter* Watcher;
    
public:
    UWatcherTargetingComponent(const FObjectInitializer& ObjectInitializer);

};

