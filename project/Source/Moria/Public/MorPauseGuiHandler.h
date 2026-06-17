#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorPausableUmgSequencePlayerData.h"
#include "MorPauseGuiHandler.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorPauseGuiHandler : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorPausableUmgSequencePlayerData> ActivePlayers;
    
public:
    UMorPauseGuiHandler(const FObjectInitializer& ObjectInitializer);

};

