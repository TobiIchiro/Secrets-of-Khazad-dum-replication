#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorMonumentData.h"
#include "MorMonumentDataArray.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorMonumentDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorMonumentData> Items;
    
public:
    FMorMonumentDataArray();
};

