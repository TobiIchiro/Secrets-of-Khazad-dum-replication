#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FGKEquippedCosmeticItem.h"
#include "FGKEquippedCosmeticItemArray.generated.h"

class UEquipComponent;

USTRUCT(BlueprintType)
struct FGK_API FFGKEquippedCosmeticItemArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UEquipComponent* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFGKEquippedCosmeticItem> Items;
    
public:
    FFGKEquippedCosmeticItemArray();
};

