#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotifyState_HitWindow.h"
#include "MoriaAnimNotifyState_HitWindow.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class MORIA_API UMoriaAnimNotifyState_HitWindow : public UFGKAnimNotifyState_HitWindow {
    GENERATED_BODY()
public:
    UMoriaAnimNotifyState_HitWindow();

};

