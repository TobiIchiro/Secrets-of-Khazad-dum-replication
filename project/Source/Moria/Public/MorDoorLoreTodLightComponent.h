#pragma once
#include "CoreMinimal.h"
#include "MorDoorLoreTodRowHandle.h"
#include "MorGameplayTodLightComponent.h"
#include "Templates/SubclassOf.h"
#include "MorDoorLoreTodLightComponent.generated.h"

class AMorDoor;
class UGameplayAbility;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMorDoorLoreTodLightComponent : public UMorGameplayTodLightComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMorDoor* Door;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDoorLoreTodRowHandle RowHandle;
    
public:
    UMorDoorLoreTodLightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UGameplayAbility> GetSingGameplayAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMorDoorLoreTodRowHandle GetRowHandle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRequiresEntitlement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEntitlementUsable() const;
    
};

