#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorZoneRowHandle.h"
#include "Parcel.generated.h"

USTRUCT(BlueprintType)
struct FParcel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> Cells;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> NeighborParcelIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> HorizontalNeighborParcelIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorZoneRowHandle ZoneHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConnectionsMade;
    
    MORIA_API FParcel();
};

