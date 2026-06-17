#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FGKGameState.h"
#include "ProcWorldReadyDelegate.h"
#include "MoriaGameState.generated.h"

class ABiomeManager;
class AMorWorldLighting;
class AMoriaVoxelWorld;
class AWorldLayout;
class UMorLeaveGameHandler;

UCLASS(Blueprintable)
class MORIA_API AMoriaGameState : public AFGKGameState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMoriaVoxelWorld* VoxelWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AWorldLayout* WorldLayout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABiomeManager* BiomeManager;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FProcWorldReady OnWorldReady;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMorWorldLighting* WorldLighting;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorLeaveGameHandler* LeaveGameHandler;
    
public:
    AMoriaGameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetHouseLightsColor(const FColor& LightColor);
    
    UFUNCTION(BlueprintCallable)
    void SetHouseLights(float Intensity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorldReady() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetShadersFinishedCompiling();
    
};

