#pragma once
#include "CoreMinimal.h"
#include "FGKAnimNotifyState.h"
#include "FGKAnimNotifyState_ComboWindow.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FGK_API UFGKAnimNotifyState_ComboWindow : public UFGKAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ComboOverrideOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBranching;
    
    UFGKAnimNotifyState_ComboWindow();

};

