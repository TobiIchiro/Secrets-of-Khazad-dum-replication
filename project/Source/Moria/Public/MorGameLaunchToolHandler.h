#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EHostGameFailedReason.h"
#include "EPlayerHostStatus.h"
#include "MorGameLaunchToolLevelReference.h"
#include "Templates/SubclassOf.h"
#include "MorGameLaunchToolHandler.generated.h"

class UMorGameLaunchToolConfiguration;
class UMorGameLaunchToolScreen;
class UMorGameSessionManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorGameLaunchToolHandler : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMorGameLaunchToolScreen> ScreenWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMorGameLaunchToolLevelReference> LevelReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorGameSessionManager* GameSessionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorGameLaunchToolConfiguration* Configuration;
    
public:
    UMorGameLaunchToolHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StartGame();
    
    UFUNCTION(BlueprintCallable)
    UMorGameLaunchToolScreen* OpenScreenWidget();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void OpenGameLaunchToolScene(const UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void OnHostGameStatusChanged(EPlayerHostStatus HostStatus, EHostGameFailedReason FailedReason);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMorGameLaunchToolConfiguration* GetConfiguration();
    
    UFUNCTION(BlueprintCallable)
    void CloseScreenWidget();
    
};

