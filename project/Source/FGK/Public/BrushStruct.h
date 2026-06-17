#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BrushStruct.generated.h"

class ALandscapeBlueprintBrushBase;

USTRUCT(BlueprintType)
struct FBrushStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALandscapeBlueprintBrushBase> BrushType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeight;
    
    FGK_API FBrushStruct();
};

