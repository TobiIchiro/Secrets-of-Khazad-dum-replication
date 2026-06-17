#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MorToolRowHandle.h"
#include "MorRestorationUtils.generated.h"

class UInventoryComponent;

UCLASS(Blueprintable)
class MORIA_API UMorRestorationUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorRestorationUtils();

    UFUNCTION(BlueprintCallable)
    static bool HasRequiredTools(UInventoryComponent* Inventory, const TArray<FMorToolRowHandle>& RequiredTools);
    
    UFUNCTION(BlueprintCallable)
    static bool HasRequiredTool(UInventoryComponent* Inventory, const FMorToolRowHandle Tool);
    
};

