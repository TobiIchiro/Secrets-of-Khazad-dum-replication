#pragma once
#include "CoreMinimal.h"
#include "EquipComponent.h"
#include "MorEntitlementStatus.h"
#include "MorItemDefinition.h"
#include "MorSocketOverride.h"
#include "Templates/SubclassOf.h"
#include "MorEquipComponent.generated.h"

class AInventoryItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorEquipComponent : public UEquipComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorSocketOverride> EpicPackSocketForVisualsOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DummyEquipment, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> DummyEquipment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxShadowDispelAmount;
    
public:
    UMorEquipComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEquipDummyItem(TSubclassOf<AInventoryItem> ItemToEquip);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCacheEntitlements(const TArray<FName>& UsableEntitlements, const TArray<FName>& UnlockedCosmetics);
    
    UFUNCTION(BlueprintCallable)
    void RemoveShadowDispel(const int32 Amount);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DummyEquipment();
    
    UFUNCTION(BlueprintCallable)
    void OnEntitlementStatusUpdate(const FName& EntitlementID, const FMorEntitlementStatus& Status);
    
    UFUNCTION(BlueprintCallable)
    void OnCosmeticUpdate(const FMorItemDefinition& ItemDefinition, bool bUsable);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShadowDispelAmount() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void CustomizationsLocallyApplied();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientRequestEntitlements();
    
    UFUNCTION(BlueprintCallable)
    void AddShadowDispel(const int32 Amount);
    
};

