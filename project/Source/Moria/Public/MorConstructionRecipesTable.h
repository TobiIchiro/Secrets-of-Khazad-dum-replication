#pragma once
#include "CoreMinimal.h"
#include "FGKDataTableBase.h"
#include "MorConstructionRowHandle.h"
#include "MorConstructionRecipesTable.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorConstructionRecipesTable : public UFGKDataTableBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FMorConstructionRowHandle, FName> ConstructionRecipeLookup;
    
public:
    UMorConstructionRecipesTable();

};

