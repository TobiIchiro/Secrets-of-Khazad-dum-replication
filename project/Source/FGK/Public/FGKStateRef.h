#pragma once
#include "CoreMinimal.h"
#include "FGKHashedString.h"
#include "Templates/SubclassOf.h"
#include "FGKStateRef.generated.h"

class UFGKState;

USTRUCT(BlueprintType)
struct FGK_API FFGKStateRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFGKState> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFGKHashedString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKState* Template;
    
    FFGKStateRef();
};

