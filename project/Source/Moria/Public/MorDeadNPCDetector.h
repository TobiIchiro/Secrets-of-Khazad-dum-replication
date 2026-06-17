#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SphereComponent.h"
#include "MorDeadNPCDetector.generated.h"

class AActor;
class AMorCharacter;
class UMorNPCComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorDeadNPCDetector : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDetectOnOverlap;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, TWeakObjectPtr<UMorNPCComponent>> NPCsRegistered;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMorNPCComponent>> NPCsDead;
    
public:
    UMorDeadNPCDetector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SetTargetDeadNPC(UMorNPCComponent* NPC);
    
    UFUNCTION(BlueprintCallable)
    bool ResetTargetDeadNPC();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OverlapEnd(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OverlapBegin(UPrimitiveComponent* Comp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherIndex, bool bFromSweep, const FHitResult& SweepResult);
    
private:
    UFUNCTION(BlueprintCallable)
    void NpcRevived(AActor* NPC);
    
    UFUNCTION(BlueprintCallable)
    void NpcDied(AActor* NPC);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetDeadNPCAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTargetDeadNPC() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDetectedDeadNPCs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorCharacter* GetTargetDeadNPC() const;
    
};

