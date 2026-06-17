#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorSharedPlayerData.h"
#include "MorSharedPlayerDataArray.generated.h"

class AMorPlayerListManager;

USTRUCT(BlueprintType)
struct MORIA_API FMorSharedPlayerDataArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorSharedPlayerData> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    AMorPlayerListManager* Parent;
    
    FMorSharedPlayerDataArray();
};

