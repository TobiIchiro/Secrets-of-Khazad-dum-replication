#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorBreakableInstanceStateArray.h"
#include "MorInstancedHealthEntitySet.h"
#include "MorSaveGameObjectNative.h"
#include "MorBubbleBreakableInstanceHandler.generated.h"

class AGlobalInstancedMeshManager;
class UMorBubbleCatalog;

UCLASS(Blueprintable, ClassGroup=Custom, Within=MorBubbleInstance, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorBubbleBreakableInstanceHandler : public UActorComponent, public IMorInstancedHealthEntitySet, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AGlobalInstancedMeshManager* InstancedMeshManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorBubbleCatalog* BubbleCatalog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=HandleOnInstanceStatesReplicated, meta=(AllowPrivateAccess=true))
    FMorBreakableInstanceStateArray InstanceStates;
    
public:
    UMorBubbleBreakableInstanceHandler(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnInstanceStatesReplicated();
    

    // Fix for true pure virtual functions not being implemented
};

