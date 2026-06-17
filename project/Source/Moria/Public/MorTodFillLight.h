#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorTodFillLight.generated.h"

class UTODFillLight;

UCLASS(Blueprintable)
class MORIA_API AMorTodFillLight : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTODFillLight* LightComponent;
    
    AMorTodFillLight(const FObjectInitializer& ObjectInitializer);

};

