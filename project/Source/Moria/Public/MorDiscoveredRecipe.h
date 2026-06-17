#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorAnyRecipeRowHandle.h"
#include "MorDiscoveredRecipe.generated.h"

USTRUCT(BlueprintType)
struct FMorDiscoveredRecipe : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAnyRecipeRowHandle RowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDiscoverSilent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWasReplicationAdded;
    
public:
    MORIA_API FMorDiscoveredRecipe();
};

