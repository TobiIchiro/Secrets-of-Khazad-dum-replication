#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMorLairNestType.h"
#include "AILairNestComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UAILairNestComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorLairNestType LairNestType;
    
    UAILairNestComponent(const FObjectInitializer& ObjectInitializer);

};

