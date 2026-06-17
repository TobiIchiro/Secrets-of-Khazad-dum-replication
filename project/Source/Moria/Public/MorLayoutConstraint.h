#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "EMorLayoutConstraintKind.h"
#include "EZoneSet.h"
#include "MorLandmarkRowHandle.h"
#include "MorLayoutConstraint.generated.h"

USTRUCT(BlueprintType)
struct FMorLayoutConstraint : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EZoneSet ZoneSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorLayoutConstraintKind Kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorLandmarkRowHandle RouteStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorLandmarkRowHandle RouteEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorLandmarkRowHandle> OtherLandmarks;
    
    MORIA_API FMorLayoutConstraint();
};

