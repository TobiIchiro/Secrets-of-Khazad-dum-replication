#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EFGKHitFromDirection.h"
#include "EFGKPartialHitReactionSlot.h"
#include "FGKCharacterDataLoadingInterface.h"
#include "FGKHealthComponent.h"
#include "FGKHitReactionRequest.h"
#include "FGKReactRecord.h"
#include "FGKCharacterHealthComponent.generated.h"

class AFGKBaseCharacter;
class UDataTable;
class UFGKWeakPoint;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FGK_API UFGKCharacterHealthComponent : public UFGKHealthComponent, public IFGKCharacterDataLoadingInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKWeakPoint*> WeakPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> HeadHitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ChestHitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> LeftArmHitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> RightArmHitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> LeftLegHitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> RightLegHitBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* HitReactionTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> PartialHitTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> BonesThatIgnoreDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFGKBaseCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKHitReactionRequest HitReactionRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKHitReactionRequest LastHitReactionRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKHitReactionRequest AcceptedHitReactionRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFGKHitReactionRequest ServerAcceptedHitReactionRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EFGKPartialHitReactionSlot, EFGKHitFromDirection> PartialHitReactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FFGKReactRecord> SelectedReactionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHitReactionTableProcessed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanGetUp: 1;
    
public:
    UFGKCharacterHealthComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AckServerReceivedReactionRequest(const FFGKHitReactionRequest& HitReactRequest);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnKillFromFalling();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDamageFromLanding();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_AckServerReceivedReactionRequest(const FFGKHitReactionRequest& HitReactRequest);
    

    // Fix for true pure virtual functions not being implemented
};

