#pragma once
#include "CoreMinimal.h"
#include "BodyPartEntry.h"
#include "CustomizationSoftObjRow.h"
#include "CustomizationBodyData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationBodyData : public FCustomizationSoftObjRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBodyPartEntry> BodyComponents;
    
    MORIA_API FCustomizationBodyData();
};

