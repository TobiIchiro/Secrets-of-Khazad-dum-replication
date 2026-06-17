#pragma once
#include "CoreMinimal.h"
#include "MorOwnershipDataArray.h"
#include "MorReplicatedManager.h"
#include "MorSaveGameObjectNative.h"
#include "MorCharacterOwnershipManager.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorCharacterOwnershipManager : public AMorReplicatedManager, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GenericPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMorOwnershipDataArray OwnershipData;
    
public:
    AMorCharacterOwnershipManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

