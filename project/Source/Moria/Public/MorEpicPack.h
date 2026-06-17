#pragma once
#include "CoreMinimal.h"
#include "MorEpicPackRowHandle.h"
#include "MorItemBase.h"
#include "MorEpicPack.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorEpicPack : public AMorItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEpicPackRowHandle RowHandle;
    
    AMorEpicPack(const FObjectInitializer& ObjectInitializer);

};

