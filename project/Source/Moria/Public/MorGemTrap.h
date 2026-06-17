#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorOrcTrapDefinition.h"
#include "MorProxyActorInterface.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "OnGemTrapTriggeredDelegate.h"
#include "Templates/SubclassOf.h"
#include "MorGemTrap.generated.h"

class AInventoryItem;
class AMorReceptacle;

UCLASS(Blueprintable)
class MORIA_API AMorGemTrap : public AActor, public IMorProxyActorInterface, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOrcTrapDefinition EncounterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorReceptacle* Receptacle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGemTrapTriggered OnGemTrapTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGemTrapWasTriggered;
    
public:
    AMorGemTrap(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetReceptacle(AMorReceptacle* InReceptacle);
    
    UFUNCTION(BlueprintCallable)
    void SetEncounterData(const FMorOrcTrapDefinition& Definition);
    
private:
    UFUNCTION(BlueprintCallable)
    void InventoryItemRemoved(TSubclassOf<AInventoryItem> ItemClass, int32 AmountRemoved, int32 NewTotalCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorReceptacle* GetReceptacle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorOrcTrapDefinition GetEncounterData() const;
    

    // Fix for true pure virtual functions not being implemented
};

