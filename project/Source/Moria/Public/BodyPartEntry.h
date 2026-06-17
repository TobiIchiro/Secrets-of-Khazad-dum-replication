#pragma once
#include "CoreMinimal.h"
#include "MaterialSlotEntry.h"
#include "SoftModularMeshEntry.h"
#include "BodyPartEntry.generated.h"

class USubsurfaceProfile;
class UTexture;

USTRUCT(BlueprintType)
struct FBodyPartEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftModularMeshEntry BodyPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialSlotEntry SkinMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Skin_Diffuse_Texture_Light;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> Skin_Diffuse_Texture_Dark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubsurfaceProfile* SubsurfaceProfileToOverrideForLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubsurfaceProfile* SubsurfaceProfileToOverrideForDark;
    
    MORIA_API FBodyPartEntry();
};

