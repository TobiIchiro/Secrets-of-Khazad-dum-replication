#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "FGKAnimNotifyState_SpawnLootWhenHit.generated.h"

class AActor;
class UFGKLootSpawnerAsset;
class UFGKLootSpawnerComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyState_SpawnLootWhenHit : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFGKLootSpawnerAsset* LootSpawnerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKLootSpawnerComponent* RunTimeSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MyMeshComp;
    
public:
    UFGKAnimNotifyState_SpawnLootWhenHit();

protected:
    UFUNCTION(BlueprintCallable)
    void OnHit(AActor* Attacker) const;
    
};

