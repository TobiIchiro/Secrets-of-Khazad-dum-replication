#pragma once
#include "CoreMinimal.h"
#include "MoriaAnimNotifyState.h"
#include "Templates/SubclassOf.h"
#include "MoriaAnimNotifyState_Effect.generated.h"

class UGameplayEffect;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class MORIA_API UMoriaAnimNotifyState_Effect : public UMoriaAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> SelfEffect;
    
    UMoriaAnimNotifyState_Effect();

};

