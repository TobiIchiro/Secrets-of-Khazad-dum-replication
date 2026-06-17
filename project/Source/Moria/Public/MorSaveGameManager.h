#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKGlobalManagerInterface.h"
#include "EHostGameFailedReason.h"
#include "EPlayerHostStatus.h"
#include "MorSaveGameManager.generated.h"

class AMorSaveSystemWorldState;
class UInputComponent;
class UMorGameSessionManager;
class UMorSaveFileManager;
class UMorSaveGameData;
class UMorSaveGamePopUpWidget;
class UMorWorldSaveGame;

UCLASS(Blueprintable, Within=MoriaGameInstance)
class MORIA_API UMorSaveGameManager : public UObject, public IFGKGlobalManagerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorSaveFileManager* SaveFileManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorWorldSaveGame* LoadWorldSaveGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AMorSaveSystemWorldState> CurrentWorldState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorSaveGameData* SaveGameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMorGameSessionManager* GameSessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMorSaveGamePopUpWidget* SaveGamePopUpWidget;
    
public:
    UMorSaveGameManager();

    UFUNCTION(BlueprintCallable)
    void OnHostGameStatusChanged(EPlayerHostStatus HostStatus, EHostGameFailedReason FailedReason);
    

    // Fix for true pure virtual functions not being implemented
};

