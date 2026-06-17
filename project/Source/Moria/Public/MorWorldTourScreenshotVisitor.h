#pragma once
#include "CoreMinimal.h"
#include "MorWorldTourVisitor.h"
#include "MorWorldTourScreenshotVisitor.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorWorldTourScreenshotVisitor : public UMorWorldTourVisitor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RecoveryFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FacingFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AdvanceFrame;
    
public:
    UMorWorldTourScreenshotVisitor();

};

