#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "EMonumentType.h"
#include "MorMonumentStageData.h"
#include "MorMonumentDefinition.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct MORIA_API FMorMonumentDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMonumentType MonumentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorMonumentStageData> StageDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BuiltMonumentMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasRevealStage;
    
    FMorMonumentDefinition();
};

