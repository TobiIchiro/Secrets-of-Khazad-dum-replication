#pragma once
#include "CoreMinimal.h"
#include "GenProfileEntry.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FGenProfileEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Tag;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double Timestamp;
    
    FGenProfileEntry();
};

