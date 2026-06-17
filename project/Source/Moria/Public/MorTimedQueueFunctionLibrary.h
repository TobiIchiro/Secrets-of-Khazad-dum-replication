#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MorTimedQueue.h"
#include "MorTimedQueueFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorTimedQueueFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorTimedQueueFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Num(const FMorTimedQueue& Queue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRunning(const FMorTimedQueue& Queue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetTotalRemainingDuration(const FMorTimedQueue& Queue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetItemRemainingDuration(const FMorTimedQueue& Queue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanRunForever(const FMorTimedQueue& Queue);
    
};

