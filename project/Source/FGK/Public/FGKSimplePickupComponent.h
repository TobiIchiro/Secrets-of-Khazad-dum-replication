#pragma once
#include "CoreMinimal.h"
#include "FGKPickupComponent.h"
#include "Templates/SubclassOf.h"
#include "FGKSimplePickupComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBlueprintOnUse);

class UActorComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKSimplePickupComponent : public UFGKPickupComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimpleValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UActorComponent> ReplenishableType;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintOnUse BlueprintOnUse;
    
public:
    UFGKSimplePickupComponent(const FObjectInitializer& ObjectInitializer);

};

