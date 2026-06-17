#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FGKLoadingScreenBlueprintLibrary.generated.h"

class UFileMediaSource;

UCLASS(Blueprintable)
class FGKLOADINGSCREEN_API UFGKLoadingScreenBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFGKLoadingScreenBlueprintLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void PlayLoadingScreen(bool bPlayUntilStopped, float PlayTime);
    
    UFUNCTION(BlueprintCallable)
    static void PlayLoadingMovie(bool bPlayUntilStopped, float PlayTime, UFileMediaSource* FileSource);
    
};

