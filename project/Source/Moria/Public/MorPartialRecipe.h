#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorAnyRecipeRowHandle.h"
#include "MorPartialRecipe.generated.h"

USTRUCT(BlueprintType)
struct FMorPartialRecipe : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorAnyRecipeRowHandle RowHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    bool bWasReplicationAdded;
    
public:
    MORIA_API FMorPartialRecipe();
};

