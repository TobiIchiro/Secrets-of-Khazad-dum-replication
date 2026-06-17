#include "MorAIBehaviorPointComponent_Meal.h"

UMorAIBehaviorPointComponent_Meal::UMorAIBehaviorPointComponent_Meal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = false;
    this->MealToEat = NULL;
}

void UMorAIBehaviorPointComponent_Meal::HandleOnMealDestroyed(AActor* DestroyedMeal) {
}

AMorMeal* UMorAIBehaviorPointComponent_Meal::GetAssignedMeal() const {
    return NULL;
}

void UMorAIBehaviorPointComponent_Meal::AssignMeal(AMorMeal* AssignedMeal) {
}


