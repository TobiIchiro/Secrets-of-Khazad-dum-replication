#pragma once
#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "FGKInteractComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKInteractComponent : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* SelectedInteractable;
    
public:
    UFGKInteractComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetSelectedInteractable(AActor* InInteractable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_InteractedWith(AActor* Interactable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSelectedInteractable() const;
    
};

