#pragma once
#include "CoreMinimal.h"
#include "MorWaypointContextComponent.h"
#include "MorRemoveWaypointOnInteractComponent.generated.h"

class AMorCharacter;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorRemoveWaypointOnInteractComponent : public UMorWaypointContextComponent {
    GENERATED_BODY()
public:
    UMorRemoveWaypointOnInteractComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void NewInteractor(AMorCharacter* Interactor);
    
};

