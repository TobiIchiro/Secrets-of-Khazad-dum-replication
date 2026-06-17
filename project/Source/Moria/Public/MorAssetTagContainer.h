#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "MorAssetTagContainer.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAssetTagContainer : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UMorAssetTagContainer();

};

