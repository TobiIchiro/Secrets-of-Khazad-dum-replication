#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FGKComponentWithReplicatorInterface.h"
#include "PersonalityComponent.generated.h"

class UPersonalityInfo;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UPersonalityComponent : public UActorComponent, public IFGKComponentWithReplicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTryAssignUnique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPersonalityInfo*> PersonalityInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentBasePersonality, meta=(AllowPrivateAccess=true))
    UPersonalityInfo* CurrentBasePersonality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPersonalityInfo* CurrentModifiedPersonality;
    
public:
    UPersonalityComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPersonality(UPersonalityInfo* NewPersonality);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTogglePersonalityInternal();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerStartEmoteInternal(int32 EmoteIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentBasePersonality();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPersonalityInfo* GetCurrent() const;
    

    // Fix for true pure virtual functions not being implemented
};

