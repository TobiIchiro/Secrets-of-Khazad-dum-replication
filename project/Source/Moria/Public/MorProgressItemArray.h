#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorProgressItem.h"
#include "MorProgressItemArray.generated.h"

USTRUCT(BlueprintType)
struct FMorProgressItemArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorProgressItem> Items;
    
public:
    MORIA_API FMorProgressItemArray();
};

