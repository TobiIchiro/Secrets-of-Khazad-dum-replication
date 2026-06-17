#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "MorLevelSequenceSpawner.generated.h"

class AMorLevelSequenceActor;
class ULevelSequencePlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorLevelSequenceSpawner : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConfigureLevelSequenceActor, AMorLevelSequenceActor*, LevelSequenceActor);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConfigureLevelSequenceActor OnConfigureLevelSequenceActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorLevelSequenceActor> LevelSequenceActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=HandleOnLevelSequenceActorChanged, meta=(AllowPrivateAccess=true))
    AMorLevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideTransformOrigin: 1;
    
public:
    UMorLevelSequenceSpawner(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetLevelSequenceActor(AMorLevelSequenceActor* InLevelSequenceActor);
    
    UFUNCTION(BlueprintCallable)
    void PlaySequence();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOnLevelSequenceActorChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelSequencePlayer* GetSequencePlayer() const;
    
};

