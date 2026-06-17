#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorSaveGameObjectNative.h"
#include "MorWaypointContextComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorWaypointContextComponent : public UActorComponent, public IMorSaveGameObjectNative {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 WaypointId;
    
    UMorWaypointContextComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

