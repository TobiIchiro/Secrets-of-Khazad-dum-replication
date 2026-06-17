#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RecipeLearnedSignatureDelegate.h"
#include "FGKRecipeRepository.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKRecipeRepository : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRecipeLearnedSignature OnRecipeLearned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_KnownRecipes, meta=(AllowPrivateAccess=true))
    TArray<FName> KnownRecipes;
    
public:
    UFGKRecipeRepository(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_KnownRecipes(const TArray<FName>& OldKnownRecipes);
    
public:
    UFUNCTION(BlueprintCallable)
    void LearnRecipe(const FName& RecipeName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRecipeKnown(const FName& RecipeName) const;
    
    UFUNCTION(BlueprintCallable)
    void Init(const TArray<FName>& StartingRecipes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetKnownRecipes() const;
    
};

