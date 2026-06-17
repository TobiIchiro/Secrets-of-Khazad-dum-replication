#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorNPCInfo.h"
#include "MorNPCInfoArray.generated.h"

class AMorNPCManager;

USTRUCT(BlueprintType)
struct MORIA_API FMorNPCInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorNPCInfo> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMorNPCManager> LinkedNPCManager;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCInfo Dummy;
    
    FMorNPCInfoArray();
};

