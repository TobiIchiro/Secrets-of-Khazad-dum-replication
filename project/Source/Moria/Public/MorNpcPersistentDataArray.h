#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorNpcPersistentData.h"
#include "MorNpcPersistentDataArray.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorNpcPersistentDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorNpcPersistentData> Items;
    
public:
    FMorNpcPersistentDataArray();
};

