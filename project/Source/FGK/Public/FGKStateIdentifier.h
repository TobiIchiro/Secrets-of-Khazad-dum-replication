#pragma once
#include "CoreMinimal.h"
#include "FGKHashedString.h"
#include "FGKStateIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FFGKStateIdentifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKHashedString HashedID;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint16 FlatHierachyIndex;
    
public:
    FGK_API FFGKStateIdentifier();
};

