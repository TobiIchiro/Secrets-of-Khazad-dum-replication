#pragma once
#include "CoreMinimal.h"
#include "luidNinjaBoneList.generated.h"

USTRUCT(BlueprintType)
struct FluidNinjaBoneList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNames;
    
    MORIA_API FluidNinjaBoneList();
};

