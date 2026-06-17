#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECraftFailureReason.h"
#include "FGKInventoryPredicate.h"
#include "CraftingComponent.generated.h"

class AActor;
class ACharacter;
class UCraftingComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UCraftingComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ACharacter* CraftInitiator;
    
public:
    UCraftingComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerStartCraft(UCraftingComponent* TargetComponent, AActor* Crafter, const FName& RecipeName, const FFGKInventoryPredicate& Predicate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerCancelCraft(UCraftingComponent* TargetComponent, AActor* Crafter, const FName& RecipeName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastStartCraftResult(const TArray<ECraftFailureReason>& CraftResult, UCraftingComponent* TargetComponent, AActor* Crafter, const FName& RecipeName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCraftFinished(const FName& RecipeName);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastCancelCraftResult(bool bSuccess, UCraftingComponent* TargetComponent, AActor* Crafter, const FName& RecipeName);
    
};

