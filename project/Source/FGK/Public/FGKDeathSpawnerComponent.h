#pragma once
#include "CoreMinimal.h"
#include "FGKLootSpawnerComponent.h"
#include "Templates/SubclassOf.h"
#include "FGKDeathSpawnerComponent.generated.h"

class AActor;
class AController;
class UDamageType;
class UFGKHealthComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKDeathSpawnerComponent : public UFGKLootSpawnerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnOnDie: 1;
    
public:
    UFGKDeathSpawnerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnDie(UFGKHealthComponent* HealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
};

