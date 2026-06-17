#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FGKAISenseConfigsOverride.generated.h"

class UAISenseConfig;

UCLASS(Blueprintable)
class FGK_API UFGKAISenseConfigsOverride : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAISenseConfig*> OverrideSensesConfig;
    
    UFGKAISenseConfigsOverride();

};

