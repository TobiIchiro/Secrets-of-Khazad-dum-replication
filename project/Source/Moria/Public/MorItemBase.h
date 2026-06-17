#pragma once
#include "CoreMinimal.h"
#include "MorInventoryItem.h"
#include "MorItemBase.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class MORIA_API AMorItemBase : public AMorInventoryItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* IconTextureReference;
    
public:
    AMorItemBase(const FObjectInitializer& ObjectInitializer);

};

