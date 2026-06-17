#pragma once
#include "CoreMinimal.h"
#include "MorMerchantSpawnActor_Base.h"
#include "MorMerchantSpawnActor_General.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class MORIA_API AMorMerchantSpawnActor_General : public AMorMerchantSpawnActor_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> PresentSpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> AbsentSpawnClass;
    
    AMorMerchantSpawnActor_General(const FObjectInitializer& ObjectInitializer);

};

