#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "FGKAISpawnerComponent.h"
#include "Templates/SubclassOf.h"
#include "MorAISpawnerComponent.generated.h"

class AActor;
class AFGKAIController;
class AMorCharacter;
class UFGKAIBehaviorPointComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorAISpawnerComponent : public UFGKAISpawnerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BehaviorPointDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> BehaviorPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFGKAIController> ControllerOverrideClass;
    
public:
    UMorAISpawnerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void StartBehaviorPoints(TSoftObjectPtr<AMorCharacter> Character);
    
public:
    UFUNCTION(BlueprintCallable)
    AMorCharacter* SpawnMorAI(TSubclassOf<AMorCharacter> InCharacterClass, const FTransform& InSpawnTransform, ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod, bool bSuppressWarning, bool bIgnorePopulationLimits);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSpawnerRequests();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnStoppedUsingBehaviorPoint(AFGKAIController* AIController, UFGKAIBehaviorPointComponent* BehaviorPoint);
    
};

