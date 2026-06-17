#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WatcherKnockbackLandingSpot.generated.h"

class AWatcherCharacter;

UCLASS(Blueprintable)
class MORIA_API AWatcherKnockbackLandingSpot : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AWatcherCharacter>> Watchers;
    
    AWatcherKnockbackLandingSpot(const FObjectInitializer& ObjectInitializer);

};

