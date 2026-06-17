#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "MorShadowNiagaraComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorShadowNiagaraComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UMorShadowNiagaraComponent(const FObjectInitializer& ObjectInitializer);

};

