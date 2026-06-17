#pragma once
#include "CoreMinimal.h"
#include "WeightedClass.h"
#include "WeightedClassTable.generated.h"

USTRUCT(BlueprintType)
struct FWeightedClassTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedClass> Entries;
    
    MORIA_API FWeightedClassTable();
};

