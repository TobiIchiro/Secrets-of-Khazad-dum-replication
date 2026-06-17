#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "FGKInventoryFunctionLibrary.generated.h"

class UFGKInventoryItemDefinition;
class UFGKInventoryItemFragment;

UCLASS(Blueprintable)
class UFGKInventoryFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFGKInventoryFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static UFGKInventoryItemFragment* FindItemDefinitionFragment(UFGKInventoryItemDefinition* ItemDef, TSubclassOf<UFGKInventoryItemFragment> FragmentClass);
    
};

