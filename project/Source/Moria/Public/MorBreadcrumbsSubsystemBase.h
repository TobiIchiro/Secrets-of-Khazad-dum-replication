#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EMorBreadcrumbCountStrategy.h"
#include "MorBreadcrumb.h"
#include "MorBreadcrumbCountChangedEventDelegate.h"
#include "MorBreadcrumbEventListener.h"
#include "MorBreadcrumbsSubsystemBase.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorBreadcrumbsSubsystemBase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorBreadcrumb> Breadcrumbs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMorBreadcrumbEventListener> EventListeners;
    
public:
    UMorBreadcrumbsSubsystemBase();

    UFUNCTION(BlueprintCallable)
    void UnbindFromCountsChangedEvent(FGameplayTagContainer CategoryTags, FMorBreadcrumbCountChangedEvent Delegate, EMorBreadcrumbCountStrategy CountStrategy);
    
    UFUNCTION(BlueprintCallable)
    void UnbindFromCountChangedEvent(FGameplayTag CategoryTag, FName CategoryName, FMorBreadcrumbCountChangedEvent Delegate, EMorBreadcrumbCountStrategy CountStrategy);
    
    UFUNCTION(BlueprintCallable)
    bool RecordBreadcrumb(FGameplayTag CategoryTag, FName CategoryName, FName UniqueName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBreadcrumb(FGameplayTag CategoryTag, FName CategoryName, FName UniqueName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBreadcrumbCounts(FGameplayTagContainer CategoryTags, EMorBreadcrumbCountStrategy CountStrategy) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBreadcrumbCount(FGameplayTag CategoryTag, FName CategoryName, EMorBreadcrumbCountStrategy CountStrategy) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearBreadcrumbs(FGameplayTagContainer CategoryTags);
    
    UFUNCTION(BlueprintCallable)
    bool ClearBreadcrumb(FGameplayTag CategoryTag, FName CategoryName, FName UniqueName);
    
    UFUNCTION(BlueprintCallable)
    void BindToCountsChangedEvent(FGameplayTagContainer CategoryTags, FMorBreadcrumbCountChangedEvent Delegate, EMorBreadcrumbCountStrategy CountStrategy);
    
    UFUNCTION(BlueprintCallable)
    void BindToCountChangedEvent(FGameplayTag CategoryTag, FName CategoryName, FMorBreadcrumbCountChangedEvent Delegate, EMorBreadcrumbCountStrategy CountStrategy);
    
};

