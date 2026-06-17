#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECellContents.h"
#include "WorldGenRecord.generated.h"

USTRUCT(BlueprintType)
struct FWorldGenRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECellContents Contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Coord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector EndCoord;
    
    MORIA_API FWorldGenRecord();
};

