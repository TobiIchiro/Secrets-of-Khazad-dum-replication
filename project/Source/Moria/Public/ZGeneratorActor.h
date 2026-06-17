#pragma once
#include "CoreMinimal.h"
#include "ContentProxy.h"
#include "ZGeneratorActor.generated.h"

class UZGeneratorComponent;

UCLASS(Blueprintable)
class MORIA_API AZGeneratorActor : public AContentProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UZGeneratorComponent* GeneratorComponent;
    
    AZGeneratorActor(const FObjectInitializer& ObjectInitializer);

};

