#pragma once
#include "CoreMinimal.h"
#include "MorSharedInterfaceDecal.generated.h"

class AOreVolumeDecal;

USTRUCT(BlueprintType)
struct MORIA_API FMorSharedInterfaceDecal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AOreVolumeDecal* Decal;
    
    FMorSharedInterfaceDecal();
};

