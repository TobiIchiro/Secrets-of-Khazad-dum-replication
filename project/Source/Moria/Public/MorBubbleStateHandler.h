#pragma once
#include "CoreMinimal.h"
#include "BroadphaseRegionTickFunction.h"
#include "MorSharedInterfaceDecal.h"
#include "MorBubbleStateHandler.generated.h"

class AWorldLayout;

USTRUCT(BlueprintType)
struct MORIA_API FMorBubbleStateHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldLayout* WorldLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBroadphaseRegionTickFunction BroadphaseRegionTickFunction;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FMorSharedInterfaceDecal> InterfacePlugOreDecalLookup;
    
public:
    FMorBubbleStateHandler();
};

template<>
struct TStructOpsTypeTraits<FMorBubbleStateHandler> : public TStructOpsTypeTraitsBase2<FMorBubbleStateHandler>
{
    enum
    {
        WithCopy = false
    };
};

