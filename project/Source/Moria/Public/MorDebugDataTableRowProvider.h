#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MorDebugDataTableRowProvider.generated.h"

class UMorDebugDataTableBuilder;

UINTERFACE(Blueprintable)
class MORIA_API UMorDebugDataTableRowProvider : public UInterface {
    GENERATED_BODY()
};

class MORIA_API IMorDebugDataTableRowProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GatherDebugData(UMorDebugDataTableBuilder* TableBuilder);
    
};

