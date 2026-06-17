#pragma once
#include "CoreMinimal.h"
#include "ItemHandle.h"
#include "FGKUIScreen.h"
#include "MorAccessibleStorageInterface.h"
#include "MorInventoryScreen.generated.h"

class UMorCursorSlotComponent;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorInventoryScreen : public UFGKUIScreen, public IMorAccessibleStorageInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* StorageObject;
    
public:
    UMorInventoryScreen();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasOpenedWithStorage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActivatedFromInteract() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorCursorSlotComponent* GetCursorSlotComponent() const;
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool HasAccessibleStorage() const override PURE_VIRTUAL(HasAccessibleStorage, return false;);
    
    UFUNCTION(BlueprintCallable)
    FItemHandle GetAccessibleStorageRoot() const override PURE_VIRTUAL(GetAccessibleStorageRoot, return FItemHandle{};);
    
};

