#pragma once
#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "FGKInventoryItem.generated.h"

class ACharacter;
class AFGKBaseCharacter;

UCLASS(Abstract, Blueprintable)
class FGK_API AFGKInventoryItem : public AInventoryItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* LastCharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEquipped: 1;
    
public:
    AFGKInventoryItem(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnUnequipped(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEquipped(ACharacter* Character);
    
};

