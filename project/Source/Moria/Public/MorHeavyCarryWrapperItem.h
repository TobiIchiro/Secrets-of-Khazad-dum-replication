#pragma once
#include "CoreMinimal.h"
#include "EjectItemProperties.h"
#include "ItemHandle.h"
#include "MorItem.h"
#include "MorHeavyCarryWrapperItem.generated.h"

class AActor;
class UMorHeavyCarryTargetComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class MORIA_API AMorHeavyCarryWrapperItem : public AMorItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorHeavyCarryTargetComponent* CurrentHeavyCarryTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UPrimitiveComponent*> SimulatingPhysicsComponents;
    
public:
    AMorHeavyCarryWrapperItem(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void ReplicatedTargetChanged(AActor* NewTarget);
    
    UFUNCTION(BlueprintCallable)
    void ItemPreEjected(const FItemHandle& Item, const int32 Count, const FEjectItemProperties& EjectProperties);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnTeleportFinished(AActor* InSelf);
    
};

