#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "FGKAssetManager.generated.h"

class UObject;

UCLASS(Blueprintable, Config=Game)
class FGK_API UFGKAssetManager : public UAssetManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UObject*> LoadedAssets;
    
public:
    UFGKAssetManager();

};

