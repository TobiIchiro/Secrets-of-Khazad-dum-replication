#pragma once
#include "CoreMinimal.h"
#include "EEquipOverrideType.h"
#include "MoriaAnimNotifyState.h"
#include "MorAnimNotifyState_EquipOverride.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MORIA_API UMorAnimNotifyState_EquipOverride : public UMoriaAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEquipOverrideType EquipOverrideType;
    
    UMorAnimNotifyState_EquipOverride();

};

