#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotifyState.h"
#include "MoriaAnimNotifyState.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class MORIA_API UMoriaAnimNotifyState : public UFGKAnimNotifyState {
    GENERATED_BODY()
public:
    UMoriaAnimNotifyState();

};

