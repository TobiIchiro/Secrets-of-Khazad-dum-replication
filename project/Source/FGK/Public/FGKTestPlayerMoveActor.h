#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGKTestPlayerCommandData.h"
#include "FGKTestPlayerMoveActor.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKTestPlayerMoveActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGKTestPlayerCommandData> PlayerMoveCommands;
    
    AFGKTestPlayerMoveActor(const FObjectInitializer& ObjectInitializer);

};

