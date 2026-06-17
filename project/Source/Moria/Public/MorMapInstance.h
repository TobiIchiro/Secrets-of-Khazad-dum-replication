#pragma once
#include "CoreMinimal.h"
#include "MorMapInstance.generated.h"

class UMorMinimapWidget;
class UUserWidget;

USTRUCT(BlueprintType)
struct MORIA_API FMorMapInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RootWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMorMinimapWidget* MinimapWidget;
    
    FMorMapInstance();
};

