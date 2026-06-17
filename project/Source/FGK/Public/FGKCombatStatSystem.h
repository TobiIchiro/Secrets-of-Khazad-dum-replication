#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnPlayerNumberChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FGKCombatStatSystem.generated.h"

class AFGKBaseCharacter;
class UFGKCombatStatSystem;
class UObject;

UCLASS(Blueprintable)
class FGK_API UFGKCombatStatSystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerNumberChanged OnActivePlayerNumberChanged;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFGKBaseCharacter>> PlayerCharacters;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AFGKBaseCharacter>> ActivePlayerCharacters;
    
public:
    UFGKCombatStatSystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumKillsPerType(AFGKBaseCharacter* Attacker, TSubclassOf<AFGKBaseCharacter> VictimClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumKills(AFGKBaseCharacter* Attacker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumFinalKillsPerType(AFGKBaseCharacter* Attacker, TSubclassOf<AFGKBaseCharacter> VictimClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumFinalKills(AFGKBaseCharacter* Attacker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFriendlyNumKillsPerType(AFGKBaseCharacter* Attacker, TSubclassOf<AFGKBaseCharacter> VictimClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFriendlyNumKills(AFGKBaseCharacter* Attacker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static UFGKCombatStatSystem* GetCombatStatSystem(const UObject* WorldContext);
    
};

