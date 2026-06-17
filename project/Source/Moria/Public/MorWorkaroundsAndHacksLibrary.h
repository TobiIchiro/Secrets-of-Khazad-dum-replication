#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MorWorkaroundsAndHacksLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class MORIA_API UMorWorkaroundsAndHacksLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorWorkaroundsAndHacksLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MarkDurinsAxe4thAxeFragmentDone(UObject* WorldContextObject);
    
};

