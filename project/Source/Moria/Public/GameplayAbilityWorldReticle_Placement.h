#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityWorldReticle.h"
#include "GameplayTagContainer.h"
#include "CachedMeshMaterials.h"
#include "MorConstructionDefinition.h"
#include "MorConstructionRowHandle.h"
#include "GameplayAbilityWorldReticle_Placement.generated.h"

class UMaterialInterface;
class UMorConstructionSnapComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, HideDropdown)
class AGameplayAbilityWorldReticle_Placement : public AGameplayAbilityWorldReticle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PreviewActorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PreviewActorMaterialInvalid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorConstructionRowHandle ConstructionHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> CopiedComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCachedMeshMaterials> CachedMeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMorConstructionSnapComponent*> CopiedSnapComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LightPreviewTag;
    
public:
    AGameplayAbilityWorldReticle_Placement(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConstructionUpdated(const FMorConstructionDefinition& ConstructionDefinition);
    
};

