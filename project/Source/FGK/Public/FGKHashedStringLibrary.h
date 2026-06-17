#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FGKHashedString.h"
#include "FGKHashedStringLibrary.generated.h"

UCLASS(Blueprintable)
class FGK_API UFGKHashedStringLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFGKHashedStringLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFGKHashedString Conv_StringToFGKHashedString(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FFGKHashedString Conv_NameToFGKHashedString(const FName& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString Conv_FGKHashedStringToString(const FFGKHashedString& HashedString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName Conv_FGKHashedStringToName(const FFGKHashedString& HashedString);
    
};

