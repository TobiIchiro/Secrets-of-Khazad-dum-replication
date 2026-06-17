#pragma once
#include "CoreMinimal.h"
#include "FGKDataTableBase.h"
#include "MorStorageTable.generated.h"

class UMorStorageDefinitionAdapter;

UCLASS(Blueprintable)
class MORIA_API UMorStorageTable : public UFGKDataTableBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UMorStorageDefinitionAdapter*> Adapters;
    
public:
    UMorStorageTable();

};

