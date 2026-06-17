#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MoriaAnimNotifyState.h"
#include "Templates/SubclassOf.h"
#include "MorAnimNotifyState_Spawn.generated.h"

class AActor;
class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class MORIA_API UMorAnimNotifyState_Spawn : public UMoriaAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachToActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform AttachedRelativeTransform;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Spawned;
    
public:
    UMorAnimNotifyState_Spawn();

private:
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) const;
    
};

