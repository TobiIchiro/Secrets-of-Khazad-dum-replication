#pragma once
#include "CoreMinimal.h"
#include "EFGKTagType.h"
#include "FGKCharacterState.h"
#include "GameplayTagContainer.h"
#include "MorCharacterState_RemoveTag.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MORIA_API UMorCharacterState_RemoveTag : public UFGKCharacterState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKTagType TagType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
public:
    UMorCharacterState_RemoveTag();

};

