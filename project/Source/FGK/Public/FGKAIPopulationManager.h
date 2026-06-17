#pragma once
#include "CoreMinimal.h"
#include "FGKManager.h"
#include "Templates/SubclassOf.h"
#include "FGKAIPopulationManager.generated.h"

class AActor;
class AController;
class AFGKBaseCharacter;
class UDamageType;
class UFGKAISpawnerComponent;
class UFGKHealthComponent;

UCLASS(Blueprintable)
class FGK_API AFGKAIPopulationManager : public AFGKManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKAISpawnerComponent* SpawnerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFGKBaseCharacter*> AllSpawns;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PopulationLimit;
    
public:
    AFGKAIPopulationManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPopulationLimit(int32 InMaxCount);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterDie(UFGKHealthComponent* HealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnitCount() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPopulationLimit() const;
    
};

