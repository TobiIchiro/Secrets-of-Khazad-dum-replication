#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "FGKOptionSaveData.generated.h"

UCLASS(Blueprintable)
class UFGKOptionSaveData : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> OptionNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OptionValues;
    
    UFGKOptionSaveData();

};

