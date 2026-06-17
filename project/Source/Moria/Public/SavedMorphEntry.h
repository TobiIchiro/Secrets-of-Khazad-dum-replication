#pragma once
#include "CoreMinimal.h"
#include "EMeshMorphs.h"
#include "SavedMorphEntry.generated.h"

USTRUCT(BlueprintType)
struct FSavedMorphEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshMorphs MorphKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MorphValue;
    
    MORIA_API FSavedMorphEntry();
};

