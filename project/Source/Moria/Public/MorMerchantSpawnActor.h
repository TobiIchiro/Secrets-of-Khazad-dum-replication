#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MorMerchantSpawnActor_Base.h"
#include "MorMerchantSpawnActor.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable)
class MORIA_API AMorMerchantSpawnActor : public AMorMerchantSpawnActor_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseInventoryPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle InventoryPreset;
    
public:
    AMorMerchantSpawnActor(const FObjectInitializer& ObjectInitializer);

};

