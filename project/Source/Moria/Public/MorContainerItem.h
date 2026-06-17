#pragma once
#include "CoreMinimal.h"
#include "MorContainerItemRowHandle.h"
#include "MorItemBase.h"
#include "PreDestroyWhenEmptySignatureDelegate.h"
#include "MorContainerItem.generated.h"

UCLASS(Blueprintable)
class MORIA_API AMorContainerItem : public AMorItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorContainerItemRowHandle RowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyWhenEmpty;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreDestroyWhenEmptySignature OnPreDestroyWhenEmpty;
    
    AMorContainerItem(const FObjectInitializer& ObjectInitializer);

};

