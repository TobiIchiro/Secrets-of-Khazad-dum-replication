#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.generated.h"

class UInventoryComponent;

USTRUCT(BlueprintType)
struct FGK_API FItemHandle
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta = (AllowPrivateAccess = true))
    int32 ID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta = (AllowPrivateAccess = true))
    int32 Payload;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<UInventoryComponent> Owner;

    FItemHandle();

    bool operator==(const FItemHandle& Other) const
    {
        return ID == Other.ID && Payload == Other.Payload && Owner == Other.Owner;
    }
};

FORCEINLINE uint32 GetTypeHash(const FItemHandle& ItemHandle)
{
    uint32 Hash = GetTypeHash(ItemHandle.ID);
    Hash = HashCombine(Hash, GetTypeHash(ItemHandle.Payload));
    Hash = HashCombine(Hash, GetTypeHash(ItemHandle.Owner));
    return Hash;
}