#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ContentProxy.h"
#include "MorEntitlementRowHandle.h"
#include "MorSoftSpawnableAssetPtr.h"
#include "MorTransporterPadProperties.h"
#include "ProxyLocator.h"
#include "TransporterPad.generated.h"

class AActor;
class UObject;
class USceneComponent;

UCLASS(Blueprintable)
class MORIA_API ATransporterPad : public AContentProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorTransporterPadProperties TransporterPadProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresOptionalEntitlement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorEntitlementRowHandle RequiredOptionalEntitlement;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorSoftSpawnableAssetPtr SpawnAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SpawnAssetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FProxyLocator BubbleConnectionTarget;
    
public:
    ATransporterPad(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRealizedUnplacedDisabledEntitlement();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRealizedUnplaced();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRealizedPlaced();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRealizationFailed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsValidTeleportLocator(const FProxyLocator& Locator, const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsBubbleConnectionRegistered(const FGameplayTag& ConnectionId, const UObject* WorldContextObject);
    
};

