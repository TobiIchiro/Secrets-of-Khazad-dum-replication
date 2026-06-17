#pragma once
#include "CoreMinimal.h"
#include "FGKGlobalManagerInterface.h"
#include "FGKMoriaService.h"
#include "MorEntitlementStatus.h"
#include "MorAnalyticsManager.generated.h"

class UMorAccountDataManager;
class UMorEntitlementManager;

UCLASS(Blueprintable, Config=Game)
class MORIA_API UMorAnalyticsManager : public UFGKMoriaService, public IFGKGlobalManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorAccountDataManager* AccountDataManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorEntitlementManager* EntitlementManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BackendUsesSSL;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BackendUri;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HeartbeatFrequencySeconds;
    
public:
    UMorAnalyticsManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnEntitlementStatusUpdated(const FName& EntitlementID, const FMorEntitlementStatus& Status);
    
    UFUNCTION(BlueprintCallable)
    void OnCultureChanged();
    

    // Fix for true pure virtual functions not being implemented
};

