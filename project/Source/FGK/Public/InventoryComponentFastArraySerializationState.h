#pragma once
#include "CoreMinimal.h"
#include "InventoryComponentFastArraySerializationState.generated.h"

class UInventoryComponent;

USTRUCT(BlueprintType)
struct FGK_API FInventoryComponentFastArraySerializationState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
public:
    FInventoryComponentFastArraySerializationState();
};

