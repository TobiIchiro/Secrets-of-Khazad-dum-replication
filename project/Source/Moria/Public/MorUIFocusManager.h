#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "FGKGlobalManagerInterface.h"
#include "InputCoreTypes.h"
#include "Templates/SubclassOf.h"
#include "MorUIFocusManager.generated.h"

class AActor;
class UMorFocusCatcherWidget;
class UUserWidget;

UCLASS(Blueprintable)
class MORIA_API UMorUIFocusManager : public UObject, public IFGKGlobalManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCustomFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidget> CustomFocusWidgetParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdvanceLogs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorFocusCatcherWidget* FixedFocusedCatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorFocusCatcherWidget> FixedFocusedCatcherClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> KeysForKeyboardFocusReturn;
    
public:
    UMorUIFocusManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnFocusUserPlayEnded(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    

    // Fix for true pure virtual functions not being implemented
};

