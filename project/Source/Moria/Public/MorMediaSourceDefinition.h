#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MorMediaOptions.h"
#include "MorMediaSourceDefinition.generated.h"

class UMediaSource;

USTRUCT(BlueprintType)
struct FMorMediaSourceDefinition : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMediaSource> MediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnlyOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorMediaOptions MediaOptions;
    
    MORIA_API FMorMediaSourceDefinition();
};

