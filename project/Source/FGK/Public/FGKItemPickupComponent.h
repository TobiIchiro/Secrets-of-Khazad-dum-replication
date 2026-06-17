#pragma once
#include "CoreMinimal.h"
#include "FGKPickupComponent.h"
#include "Templates/SubclassOf.h"
#include "FGKItemPickupComponent.generated.h"

class AActor;
class AInventoryItem;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKItemPickupComponent : public UFGKPickupComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
public:
    UFGKItemPickupComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_AddItem(AActor* PlayerActor);
    
};

