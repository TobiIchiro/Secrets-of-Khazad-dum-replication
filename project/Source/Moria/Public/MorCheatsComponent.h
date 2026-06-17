#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FGKCheatsComponent.h"
#include "EMorHealOption.h"
#include "Templates/SubclassOf.h"
#include "MorCheatsComponent.generated.h"

class AMorCharacter;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorCheatsComponent : public UFGKCheatsComponent {
    GENERATED_BODY()
public:
    UMorCheatsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeleport(const FVector& DestLocation, const FRotator& DestRotation, int32 PlayerID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPlayerTargetableByAI(bool bSetTargetable);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerReviveAllFriendly();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerRemoveAllBuffs(AMorCharacter* Character);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerQuit();
    
    UFUNCTION(Reliable, Server)
    void ServerHeal(AMorCharacter* Character, EMorHealOption HealOptions, int32 PercentageAmount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDestroyPawn(TSubclassOf<APawn> PawnClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerCmd(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerAutoSave();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAllGod();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void NavigationDebug(const TArray<FString>& Args);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientQuickSpawnComplete(const FString& Msg);
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientDestroyPawnComplete();
    
    UFUNCTION(BlueprintCallable, Client, Reliable, WithValidation)
    void ClientAllGodComplete(bool CanBeDamaged);
    
};

