#pragma once
#include "CoreMinimal.h"
#include "EMorMusic.h"
#include "ActiveMusicAkComponents.generated.h"

class UAkComponent;

USTRUCT(BlueprintType)
struct MORIA_API FActiveMusicAkComponents {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorMusic Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UAkComponent*> ActiveAkComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UAkComponent*, int32> PlayingIDs;
    
    FActiveMusicAkComponents();
};

