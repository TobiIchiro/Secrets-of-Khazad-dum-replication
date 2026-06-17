#pragma once
#include "CoreMinimal.h"
#include "MorInteractable.h"
#include "MorInteractableWithCustomName.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorInteractableWithCustomName : public AMorInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSetCustomDisplayName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CustomDisplayName, meta=(AllowPrivateAccess=true))
    FString CustomDisplayName;
    
public:
    AMorInteractableWithCustomName(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CustomDisplayName();
    
};

