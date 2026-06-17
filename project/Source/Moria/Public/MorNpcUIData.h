#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorNPCRoleRowHandle.h"
#include "MorNPCTraitRowHandle.h"
#include "MorNpcUIData.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FMorNpcUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorNPCRoleRowHandle CurrentRole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorNPCTraitRowHandle> Traits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivityPoints;
    
    FMorNpcUIData();
};

