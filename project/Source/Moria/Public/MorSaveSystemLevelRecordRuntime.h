#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorSaveSystemLevelRecordRuntime.generated.h"

class AActor;
class UMorSaveSystemActorSpawner;

UCLASS(Blueprintable, Within=MorSaveSystemLevelRecordRuntimeCollection)
class MORIA_API UMorSaveSystemLevelRecordRuntime : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorSaveSystemActorSpawner* ActorSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* StagingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* FallbackContainer;
    
public:
    UMorSaveSystemLevelRecordRuntime();

private:
    UFUNCTION(BlueprintCallable)
    void OnSaveSystemWorldStateIsReady();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelUnloaded();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelShown();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelLoaded();
    
    UFUNCTION(BlueprintCallable)
    void OnLevelHidden();
    
};

