#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESaveCompatibility.h"
#include "MorEntitlementRowHandle.h"
#include "MorWorldLayoutConfigOptionalEntitlements.h"
#include "MorWorldLayoutCustomConfiguration.h"
#include "MorWorldSaveFileInfo.h"
#include "MorWorldSelectItemUpdatedDelegate.h"
#include "MorWorldSelectItem.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorWorldSelectItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWorldSelectItemUpdated Updated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorWorldLayoutCustomConfiguration Config;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorWorldSaveFileInfo SaveFileInfo;
    
public:
    UMorWorldSelectItem();

    UFUNCTION(BlueprintCallable)
    bool UpdateEntitlementConfigState(const FName& EntitlementID, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateEntitlementConfigsState(const FMorWorldLayoutConfigOptionalEntitlements& Entitlements);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitlementEnabled(FMorEntitlementRowHandle Entitlement) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESaveCompatibility GetCompatibility() const;
    
};

