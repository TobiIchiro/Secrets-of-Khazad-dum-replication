#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "MorSITANiagaraComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorSITANiagaraComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UMorSITANiagaraComponent(const FObjectInitializer& ObjectInitializer);

};

