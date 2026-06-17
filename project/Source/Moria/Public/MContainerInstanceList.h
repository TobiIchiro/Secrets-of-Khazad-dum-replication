#pragma once
#include "CoreMinimal.h"
#include "MContainerInstanceList.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct MORIA_API FMContainerInstanceList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> Classes;
    
    FMContainerInstanceList();
};

