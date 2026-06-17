#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorShadowFXSystemTesterActor.generated.h"

class UMorShadowFogRepellerComponent;

UCLASS(Blueprintable)
class MORIA_API AMorShadowFXSystemTesterActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorShadowFogRepellerComponent* RepellerComponent;
    
    AMorShadowFXSystemTesterActor(const FObjectInitializer& ObjectInitializer);

};

