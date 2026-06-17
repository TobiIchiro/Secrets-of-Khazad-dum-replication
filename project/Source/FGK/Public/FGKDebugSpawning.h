#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "FGKDebugSpawning.generated.h"

class AFGKBaseCharacter;

UCLASS(Blueprintable)
class FGK_API UFGKDebugSpawning : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, TSubclassOf<AFGKBaseCharacter>> QuickSpawns;
    
    UFGKDebugSpawning();

};

