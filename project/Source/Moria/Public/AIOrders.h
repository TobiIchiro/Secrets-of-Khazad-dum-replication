#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAIOrders.h"
#include "AIOrders.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAIOrders {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIOrders Order;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Target;
    
    MORIA_API FAIOrders();
};

