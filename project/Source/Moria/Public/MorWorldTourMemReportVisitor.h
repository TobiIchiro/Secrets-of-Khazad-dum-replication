#pragma once
#include "CoreMinimal.h"
#include "EMorMemReportMode.h"
#include "MorWorldTourVisitor.h"
#include "MorWorldTourMemReportVisitor.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorWorldTourMemReportVisitor : public UMorWorldTourVisitor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReportFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ContinueFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMorMemReportMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PauseFrames;
    
    UMorWorldTourMemReportVisitor();

};

