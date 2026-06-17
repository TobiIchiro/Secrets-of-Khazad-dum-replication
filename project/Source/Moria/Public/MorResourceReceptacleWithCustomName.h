#pragma once
#include "CoreMinimal.h"
#include "MorResourceReceptacle.h"
#include "MorResourceReceptacleWithCustomName.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorResourceReceptacleWithCustomName : public AMorResourceReceptacle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanSetCustomDisplayName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_CustomDisplayName, meta=(AllowPrivateAccess=true))
    FString CustomDisplayName;
    
public:
    AMorResourceReceptacleWithCustomName(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CustomDisplayName();
    
};

