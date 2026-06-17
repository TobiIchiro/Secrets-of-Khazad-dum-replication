#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EWorldElementType.h"
#include "WorldElement.generated.h"

USTRUCT(BlueprintType)
struct FWorldElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWorldElementType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString MockText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag LookupId;
    
    MORIA_API FWorldElement();
};

