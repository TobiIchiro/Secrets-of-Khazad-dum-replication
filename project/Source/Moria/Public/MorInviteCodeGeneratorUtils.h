#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MorInviteCodeGeneratorUtils.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorInviteCodeGeneratorUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorInviteCodeGeneratorUtils();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ParseInviteCode(const FString& RawText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetInviteCodeMaxLength();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FormatInviteCodeForDisplay(const FString& InviteCode);
    
};

