#pragma once
#include "CoreMinimal.h"
#include "InteractContext.generated.h"

class AMorCharacter;

USTRUCT(BlueprintType)
struct FInteractContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorCharacter* Interactor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InteractionHash;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GAActivationPredictionKeyHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    MORIA_API FInteractContext();
};

