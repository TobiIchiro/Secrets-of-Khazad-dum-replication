#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorArchitectureStructureProperties.h"
#include "MorLevelContentData.h"
#include "MorPrefabData.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorPrefabData : public UMorLevelContentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PrefabAABBMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PrefabAABBMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorArchitectureStructureProperties ArchitectureProperties;
    
    UMorPrefabData();

};

