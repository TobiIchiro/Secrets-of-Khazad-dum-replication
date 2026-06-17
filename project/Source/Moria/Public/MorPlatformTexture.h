#pragma once
#include "CoreMinimal.h"
#include "MorPlatformTexture.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FMorPlatformTexture {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WindowsTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* XBoxTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* PlayStationTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* SwitchTexture;
    
public:
    MORIA_API FMorPlatformTexture();
};

