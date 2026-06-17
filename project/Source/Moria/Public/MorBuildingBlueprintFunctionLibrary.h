#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBuildMode.h"
#include "EQuickBuildRecipe.h"
#include "MorBuildingBlueprintFunctionLibrary.generated.h"

class AMorCharacter;

UCLASS(Blueprintable)
class MORIA_API UMorBuildingBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorBuildingBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetBuildMode(AMorCharacter* Character, EBuildMode BuildMode, EQuickBuildRecipe QuickBuildRecipe);
    
};

