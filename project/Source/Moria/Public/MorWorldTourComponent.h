#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorWorldTourComponent.generated.h"

class UMorWorldTourMemReportVisitor;
class UMorWorldTourPerformanceVisitor;
class UMorWorldTourScreenshotVisitor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorWorldTourComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisitTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorWorldTourScreenshotVisitor* ScreenshotVisitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorWorldTourMemReportVisitor* MemReportVisitor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorWorldTourPerformanceVisitor* PerformanceVisitor;
    
public:
    UMorWorldTourComponent(const FObjectInitializer& ObjectInitializer);

};

