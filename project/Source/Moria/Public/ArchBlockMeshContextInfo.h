#pragma once
#include "CoreMinimal.h"
#include "EArchBlockMeshDamageState.h"
#include "ArchBlockMeshContextInfo.generated.h"

USTRUCT(BlueprintType)
struct MORIA_API FArchBlockMeshContextInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EArchBlockMeshDamageState CurrentDamageState;
    
    FArchBlockMeshContextInfo();
};

