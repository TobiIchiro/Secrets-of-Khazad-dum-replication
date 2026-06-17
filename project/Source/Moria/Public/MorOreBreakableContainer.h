#pragma once
#include "CoreMinimal.h"
#include "MorBreakableContainer.h"
#include "MorOreContainerSyncData.h"
#include "MorOreBreakableContainer.generated.h"

class UDecalComponent;

UCLASS(Blueprintable)
class MORIA_API AMorOreBreakableContainer : public AMorBreakableContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDecalComponent* OreDecalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDecalZRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDecalScaleValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_OreUpdated, meta=(AllowPrivateAccess=true))
    FMorOreContainerSyncData OreSyncData;
    
public:
    AMorOreBreakableContainer(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_OreUpdated();
    
};

