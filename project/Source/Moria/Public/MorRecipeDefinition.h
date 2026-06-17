#pragma once
#include "CoreMinimal.h"
#include "FGKTableRowBase.h"
#include "MorConstructionRowHandle.h"
#include "MorRecipeUnlock.h"
#include "MorRequiredRecipeMaterial.h"
#include "MorRecipeDefinition.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorRecipeDefinition : public FFGKTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSandboxRequirementsOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorRequiredRecipeMaterial> SandboxRequiredMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorConstructionRowHandle> SandboxRequiredConstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorRequiredRecipeMaterial> DefaultRequiredMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorConstructionRowHandle> DefaultRequiredConstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasSandboxUnlockOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorRecipeUnlock SandboxUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorRecipeUnlock DefaultUnlocks;
    
    FMorRecipeDefinition();
};

