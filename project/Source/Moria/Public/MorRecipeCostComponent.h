#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGKInventoryPredicate.h"
#include "MorRequiredRecipeMaterial.h"
#include "OnRecipeFreeDelegate.h"
#include "MorRecipeCostComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, Within=Controller, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorRecipeCostComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRecipeFree OnRecipeFree;
    
    UMorRecipeCostComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerPayRecipeCost(AActor* Crafter, const TArray<FMorRequiredRecipeMaterial>& Materials, const FFGKInventoryPredicate& Predicate);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastReportFreeRecipe();
    
};

