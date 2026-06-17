#pragma once
#include "CoreMinimal.h"
#include "ExtraLimbBones.generated.h"

USTRUCT(BlueprintType)
struct FExtraLimbBones {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Bones;
    
    MORIA_API FExtraLimbBones();
};

