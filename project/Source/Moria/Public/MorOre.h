#pragma once
#include "CoreMinimal.h"
#include "MorItemBase.h"
#include "MorOreRowHandle.h"
#include "MorOre.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorOre : public AMorItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorOreRowHandle RowHandle;
    
    AMorOre(const FObjectInitializer& ObjectInitializer);

};

