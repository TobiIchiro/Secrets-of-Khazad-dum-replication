#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorAIPatrolRowHandle.h"
#include "MorAIPatrolSaveData.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorAIPatrolSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAIPatrolRowHandle PatrolRowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FMorAIPatrolSaveData();
};

