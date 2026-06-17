#pragma once
#include "CoreMinimal.h"
#include "FGKInventoryFilter.h"
#include "InventoryComponent.h"
#include "FGKFilteredInventoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKFilteredInventoryComponent : public UInventoryComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFGKInventoryFilter Filter;
    
    UFGKFilteredInventoryComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

