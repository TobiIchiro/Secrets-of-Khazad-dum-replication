#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MorNetUserId.h"
#include "MorNetworkUtils.generated.h"

class AActor;

UCLASS(Blueprintable)
class MORIA_API UMorNetworkUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorNetworkUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsNetUserIdValid(const FMorNetUserId& NetUserId);
    
    UFUNCTION(BlueprintCallable)
    static FText GetPlayerDisplayName(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FText GetCharacterName(const AActor* Actor, bool bUseUGC);
    
};

