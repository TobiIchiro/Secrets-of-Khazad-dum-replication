#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MAIEmoteContainer.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct FMAIEmoteContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayAbility>> Abilities;
    
    MORIA_API FMAIEmoteContainer();
};

