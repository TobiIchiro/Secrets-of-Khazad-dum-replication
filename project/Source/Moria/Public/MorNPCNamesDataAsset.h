#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MorNPCNamesDataAsset.generated.h"

UCLASS(Blueprintable)
class MORIA_API UMorNPCNamesDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> NPCNames;
    
    UMorNPCNamesDataAsset();

};

