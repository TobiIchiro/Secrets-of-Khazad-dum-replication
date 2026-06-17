#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorConstructionRecipeRowHandle.h"
#include "Templates/SubclassOf.h"
#include "MorRepairComponent.generated.h"

class AMorConstructionSite;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorRepairComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RecipeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorConstructionRecipeRowHandle RecipeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AMorConstructionSite> RepairSiteClass;
    
public:
    UMorRepairComponent(const FObjectInitializer& ObjectInitializer);

};

