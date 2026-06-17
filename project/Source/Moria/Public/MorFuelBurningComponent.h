#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FuelBurningEventSignatureDelegate.h"
#include "MorFuelDefinition.h"
#include "MorFuelRowHandle.h"
#include "MorSaveGameObjectNative.h"
#include "MorTimedQueue.h"
#include "MorFuelBurningComponent.generated.h"

class AActor;
class UDataTable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorFuelBurningComponent : public UActorComponent, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorFuelRowHandle> FuelFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurnSecondsPerFuelValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFuelCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FuelQueue, meta=(AllowPrivateAccess=true))
    FMorTimedQueue FuelQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DialogueToPlayOnFuelBeingAdded;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFuelBurningEventSignature OnLit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFuelBurningEventSignature OnExtinguished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFuelBurningEventSignature OnFuelQueueUpdated;
    
    UMorFuelBurningComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool TryAddFuel(AActor* User, const FMorFuelRowHandle& FuelHandle, const int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void ServerAddFuel(AActor* User, const FMorFuelRowHandle& FuelHandle, const int32 Count);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_FuelQueue();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBurning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSpaceForFuel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFuel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorFuelRowHandle> GetQueuedFuels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMorFuelRowHandle> GetFuelFilter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFuelDuration(const FMorFuelDefinition& FuelDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAddFuel(AActor* User, const FMorFuelRowHandle& FuelHandle, const int32 Count) const;
    

    // Fix for true pure virtual functions not being implemented
};

