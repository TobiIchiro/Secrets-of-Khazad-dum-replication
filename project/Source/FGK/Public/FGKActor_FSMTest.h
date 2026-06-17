#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FGKActor_FSMTest.generated.h"

class UFGKActorFSMComponent;

UCLASS(Blueprintable)
class FGK_API AFGKActor_FSMTest : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKActorFSMComponent* FSMComp;
    
public:
    AFGKActor_FSMTest(const FObjectInitializer& ObjectInitializer);

};

