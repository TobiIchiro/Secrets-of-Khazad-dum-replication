#pragma once
#include "CoreMinimal.h"
#include "DecorationVolumeComponent.h"
#include "EBlockingType.h"
#include "DecorationBlockingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UDecorationBlockingComponent : public UDecorationVolumeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockingType BlockingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemovesBlocks;
    
    UDecorationBlockingComponent(const FObjectInitializer& ObjectInitializer);

};

