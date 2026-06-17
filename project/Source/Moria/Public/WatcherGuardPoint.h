#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/TriggerSphere.h"
#include "EWatcherZone.h"
#include "WatcherGuardPoint.generated.h"

class AActor;
class AWatcherCharacter;

UCLASS(Blueprintable)
class MORIA_API AWatcherGuardPoint : public ATriggerSphere {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AWatcherCharacter>> Watchers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWatcherZone ZoneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnPointOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSearchTargets;
    
    AWatcherGuardPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocationInGuardPoint(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInGuardPoint(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGuardPointRadius() const;
    
};

