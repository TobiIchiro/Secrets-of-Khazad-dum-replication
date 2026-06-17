#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorExpeditionModifierRowHandle.h"
#include "MorExpeditionModifierItem.generated.h"

USTRUCT(BlueprintType)
struct FMorExpeditionModifierItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorExpeditionModifierRowHandle RowHandle;
    
    MORIA_API FMorExpeditionModifierItem();
};

