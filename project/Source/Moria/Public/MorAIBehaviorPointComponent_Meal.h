#pragma once
#include "CoreMinimal.h"
#include "MorAIBehaviorPointComponent.h"
#include "MorAIBehaviorPointComponent_Meal.generated.h"

class AActor;
class AMorMeal;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorAIBehaviorPointComponent_Meal : public UMorAIBehaviorPointComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorMeal* MealToEat;
    
public:
    UMorAIBehaviorPointComponent_Meal(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleOnMealDestroyed(AActor* DestroyedMeal);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AMorMeal* GetAssignedMeal() const;
    
    UFUNCTION(BlueprintCallable)
    void AssignMeal(AMorMeal* AssignedMeal);
    
};

