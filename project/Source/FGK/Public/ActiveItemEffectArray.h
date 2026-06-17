#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "ActiveItemEffect.h"
#include "ActiveItemEffectArray.generated.h"

class UInventoryComponent;

USTRUCT(BlueprintType)
struct FGK_API FActiveItemEffectArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* Inventory;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveItemEffect> List;
    
public:
    FActiveItemEffectArray();
};

