#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MergeActorCollisionSettings.generated.h"

USTRUCT(BlueprintType)
struct FMergeActorCollisionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    
    FGK_API FMergeActorCollisionSettings();
};

