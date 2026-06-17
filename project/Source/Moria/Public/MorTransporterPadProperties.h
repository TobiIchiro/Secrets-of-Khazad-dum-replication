#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMorTransporterPadType.h"
#include "MorTransporterPadProperties.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorTransporterPadProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorTransporterPadType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConnectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbsoluteTeleportLocation;
    
    FMorTransporterPadProperties();
};

