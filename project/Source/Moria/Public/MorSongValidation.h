#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EMorSongExitReason.h"
#include "MorSongValidationRequest.h"
#include "MorSongValidation.generated.h"

UCLASS(Blueprintable, EditInlineNew, HideDropdown)
class MORIA_API UMorSongValidation : public UObject {
    GENERATED_BODY()
public:
    UMorSongValidation();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSongValidForUserBP(const FMorSongValidationRequest& Request, EMorSongExitReason& OutFailReason);
    
};

