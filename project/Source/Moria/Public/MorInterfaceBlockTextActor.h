#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorInterfaceBlockTextActor.generated.h"

class UMoriaWidgetComponent;
class USceneComponent;

UCLASS(Blueprintable)
class MORIA_API AMorInterfaceBlockTextActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromInterfaceCenter;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMoriaWidgetComponent* FrontWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMoriaWidgetComponent* BackWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
public:
    AMorInterfaceBlockTextActor(const FObjectInitializer& ObjectInitializer);

};

