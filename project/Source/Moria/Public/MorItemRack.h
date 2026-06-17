#pragma once
#include "CoreMinimal.h"
#include "MorContainerInstance.h"
#include "MorInteraction.h"
#include "MorReceptacle.h"
#include "MorItemRack.generated.h"

class ACharacter;
class UUserWidget;

UCLASS(Blueprintable)
class MORIA_API AMorItemRack : public AMorReceptacle, public IMorContainerInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStorageInaccessible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoItemsToGrabInteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ManyItemsToGrabInteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction AccessStorageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction AddPackToStorageInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction PlaceItemInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction GrabItemInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorInteraction GrabPackInteraction;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> AccessStorageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACharacter*> CharactersWaitingForInventoryToLoad;
    
public:
    AMorItemRack(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisuals();
    
    UFUNCTION(BlueprintCallable)
    void SetGrabItemPriority(int32 NewPriority);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnBeforeEndPlay();
    

    // Fix for true pure virtual functions not being implemented
};

