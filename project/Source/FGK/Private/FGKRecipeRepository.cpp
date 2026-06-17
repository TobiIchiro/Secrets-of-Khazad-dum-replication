#include "FGKRecipeRepository.h"
#include "Net/UnrealNetwork.h"

UFGKRecipeRepository::UFGKRecipeRepository(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFGKRecipeRepository::OnRep_KnownRecipes(const TArray<FName>& OldKnownRecipes) {
}

void UFGKRecipeRepository::LearnRecipe(const FName& RecipeName) {
}

bool UFGKRecipeRepository::IsRecipeKnown(const FName& RecipeName) const {
    return false;
}

void UFGKRecipeRepository::Init(const TArray<FName>& StartingRecipes) {
}

TArray<FName> UFGKRecipeRepository::GetKnownRecipes() const {
    return TArray<FName>();
}

void UFGKRecipeRepository::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFGKRecipeRepository, KnownRecipes);
}


