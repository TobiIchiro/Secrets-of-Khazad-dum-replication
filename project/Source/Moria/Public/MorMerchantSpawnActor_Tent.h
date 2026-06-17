#pragma once
#include "CoreMinimal.h"
#include "MorMerchantSpawnActor_General.h"
#include "MorMerchantSpawnActor_Tent.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class MORIA_API AMorMerchantSpawnActor_Tent : public AMorMerchantSpawnActor_General {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
    AMorMerchantSpawnActor_Tent(const FObjectInitializer& ObjectInitializer);

};

