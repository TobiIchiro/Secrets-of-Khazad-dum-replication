#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "Templates/SubclassOf.h"
#include "MorHudInfo.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FMorHudInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> HudClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuildIncludes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KeybindIncludes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> KeyBinds;
    
    MORIA_API FMorHudInfo();
};

