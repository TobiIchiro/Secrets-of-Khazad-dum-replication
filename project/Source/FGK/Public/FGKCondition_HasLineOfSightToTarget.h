#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EFGKTraceMode.h"
#include "FGKCondition_TargetBase.h"
#include "FGKCondition_HasLineOfSightToTarget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCondition_HasLineOfSightToTarget : public UFGKCondition_TargetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTraceComplex: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKTraceMode TraceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereTraceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TraceStartSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TraceEndSocket;
    
public:
    UFGKCondition_HasLineOfSightToTarget();

};

