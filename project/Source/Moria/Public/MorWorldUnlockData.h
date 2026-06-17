#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MorNPCRoleRowHandle.h"
#include "MorWorldUnlockData.generated.h"

USTRUCT(BlueprintType)
struct FMorWorldUnlockData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorNPCRoleRowHandle> NPCRoles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> Recipes;
    
    MORIA_API FMorWorldUnlockData();
};

