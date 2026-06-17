#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "FGKFootprintComponent.generated.h"

class AFGKBaseCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKFootprintComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Character;
    
public:
    UFGKFootprintComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFootRaise(bool bIsLeft);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFootPlant(bool bIsLeft, FVector ImpactPoint, FRotator GroundRotation);
    
};

