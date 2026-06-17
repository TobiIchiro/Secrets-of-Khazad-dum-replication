#pragma once
#include "CoreMinimal.h"
#include "EMorLogVerbosity.h"
#include "WorldLayoutLogEntry.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FWorldLayoutLogEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorLogVerbosity Verbosity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Instances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> Tags;
    
    FWorldLayoutLogEntry();
};

