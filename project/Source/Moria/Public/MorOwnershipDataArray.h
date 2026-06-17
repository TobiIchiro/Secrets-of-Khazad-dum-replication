#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorOwnershipData.h"
#include "MorOwnershipDataArray.generated.h"

USTRUCT(BlueprintType)
struct FMorOwnershipDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorOwnershipData> Items;
    
    MORIA_API FMorOwnershipDataArray();
};

