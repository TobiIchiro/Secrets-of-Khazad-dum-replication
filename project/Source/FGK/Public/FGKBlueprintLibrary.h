#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "FGKBlueprintLibrary.generated.h"

class AFGKBaseCharacter;
class AFGKPlayerController;
class UObject;

UCLASS(Blueprintable)
class FGK_API UFGKBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFGKBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void RemoveGameplayTags(AFGKBaseCharacter* Character, const FGameplayTagContainer& GameplayTags);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsPackageDirty(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInEditor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static AFGKBaseCharacter* GetLocallyControlledPlayerCharacter(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContext"))
    static AFGKPlayerController* GetLocallyControlledPlayer(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetCommand_TeleportToBookmark();
    
    UFUNCTION(BlueprintCallable)
    static void AddGameplayTags(AFGKBaseCharacter* Character, const FGameplayTagContainer& GameplayTags);
    
};

