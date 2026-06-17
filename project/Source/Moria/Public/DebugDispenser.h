#pragma once
#include "CoreMinimal.h"
#include "ItemCount.h"
#include "MorInteractable.h"
#include "MorInteraction.h"
#include "DebugDispenser.generated.h"

class UStaticMeshComponent;
class UTextRenderComponent;

UCLASS(Blueprintable)
class MORIA_API ADebugDispenser : public AMorInteractable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FItemCount Stock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AmountToTakeAtOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroyOnEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=ContentsChanged, meta=(AllowPrivateAccess=true))
    int32 AmountRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidePartial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HideSubobjectsTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideProportional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideInNameOrder;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextRenderComponent* DebugText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorInteraction WithdrawInteraction;
    
public:
    ADebugDispenser(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateName();
    
    UFUNCTION(BlueprintCallable)
    void RemoveItem(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemCount GetContents() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ContentsChanged();
    
};

