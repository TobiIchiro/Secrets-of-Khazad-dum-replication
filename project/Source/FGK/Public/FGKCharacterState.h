#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "FGKEffectState.h"
#include "Templates/SubclassOf.h"
#include "FGKCharacterState.generated.h"

class AActor;
class AFGKBaseCharacter;
class AInventoryItem;
class UAnimSequenceBase;
class UCapsuleComponent;
class UCurveFloat;
class UEquipComponent;
class UFGKAnimNotify;
class UFGKAnimNotifyState;
class UFGKCharacterAnimInstance;
class UFGKCharacterHealthComponent;
class UFGKCharacterMovementComponent;
class UGameplayEffect;
class UInventoryComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, EditInlineNew)
class FGK_API UFGKCharacterState : public UFGKEffectState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRemovePriorVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bApplyDirectMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEquipRequiredItemOnBegin: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUnequipRequiredItemOnEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUnequipOther: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequireAlive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideMovementMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCarryOverVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> MovementMoveOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CustomMovementMoveOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveInputExtraScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundFrictionOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScaleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AInventoryItem> RequiredItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffectToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* GravityScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKCharacterMovementComponent* MoveComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* Capsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkelMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKCharacterAnimInstance* AnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEquipComponent* EquipComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFGKCharacterHealthComponent* HealthComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AInventoryItem*> EquippedItems;
    
public:
    UFGKCharacterState();

protected:
    UFUNCTION(BlueprintCallable)
    AActor* SpawnActor(TSubclassOf<AActor> ActorClass, FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    void SetMainMeshAndInstance();
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyStateEndReceived(UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyStateBeginReceived(UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation, float TotalDuration);
    
    UFUNCTION(BlueprintCallable)
    void OnNotifyReceived(UFGKAnimNotify* Notify);
    
    UFUNCTION(BlueprintCallable)
    bool IsNotifyStateRelevant(UFGKAnimNotifyState* NotifyState, UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    bool IsNotifyRelevant(UFGKAnimNotify* Notify);
    
};

