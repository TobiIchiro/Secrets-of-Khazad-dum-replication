#pragma once
#include "CoreMinimal.h"
#include "SoftItemCount.h"
#include "MorMonumentStageData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct MORIA_API FMorMonumentStageData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MonumentProgressonPointsNeeded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftItemCount> StageBuildItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StageMonumentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStartBuild;
    
    FMorMonumentStageData();
};

