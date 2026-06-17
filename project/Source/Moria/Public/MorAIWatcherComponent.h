#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EMorWatcherTriggerType.h"
#include "MorAIWatcherComponent.generated.h"

class AActor;
class AMorCharacter;
class AVolume;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorAIWatcherComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmergeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* EmergeVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* AttackVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AVolume* NoGoVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* AnchorActor;
    
public:
    UMorAIWatcherComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointInVolume(FVector Point, EMorWatcherTriggerType VolumeType) const;
    
    UFUNCTION(BlueprintCallable)
    void InitializeWatcherComponent(AVolume* InEmergeVolume, AVolume* InAttackVolume, AVolume* InNoGoVolume, AActor* InAnchorActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAnchorActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AMorCharacter*> AllPlayersInTriggerType(EMorWatcherTriggerType TriggerType) const;
    
};

