#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MorDebugRTPointWrite.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class MORIA_API AMorDebugRTPointWrite : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> TrackedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    AMorDebugRTPointWrite(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePoints();
    
    UFUNCTION(BlueprintCallable)
    void HidePoints();
    
};

