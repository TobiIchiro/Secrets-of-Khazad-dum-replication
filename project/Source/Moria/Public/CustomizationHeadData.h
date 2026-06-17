#pragma once
#include "CoreMinimal.h"
#include "BodyPartEntry.h"
#include "CustomizationSoftObjRow.h"
#include "MaterialSlotEntry.h"
#include "CustomizationHeadData.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct FCustomizationHeadData : public FCustomizationSoftObjRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBodyPartEntry Head;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialSlotEntry> EyeMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialSlotEntry> HairMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MorphTargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> FaceAnim;
    
    MORIA_API FCustomizationHeadData();
};

