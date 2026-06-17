#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MoriaAnimNotifyState.h"
#include "MoriaAnimNotifyState_MovementWindow.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class MORIA_API UMoriaAnimNotifyState_MovementWindow : public UMoriaAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Displacement;
    
    UMoriaAnimNotifyState_MovementWindow();

};

