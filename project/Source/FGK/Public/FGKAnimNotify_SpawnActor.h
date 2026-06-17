#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotify.h"
#include "Templates/SubclassOf.h"
#include "FGKAnimNotify_SpawnActor.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories)
class FGK_API UFGKAnimNotify_SpawnActor : public UFGKAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
public:
    UFGKAnimNotify_SpawnActor();

};

