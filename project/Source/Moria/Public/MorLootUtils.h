#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "MorLootUtils.generated.h"

class AMorItemBase;
class APlayerController;
class UObject;

UCLASS(Blueprintable)
class MORIA_API UMorLootUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorLootUtils();

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateAndDropLootItems(UObject* WorldContextObject, TMap<TSubclassOf<AMorItemBase>, int32> ItemMap, FVector SpawnLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BestowToPlayer(UObject* WorldContextObject, APlayerController* PlayerController, TMap<TSubclassOf<AMorItemBase>, int32> ItemMap, FVector SpawnLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void BestowToHost(UObject* WorldContextObject, TMap<TSubclassOf<AMorItemBase>, int32> ItemMap, FVector SpawnLocation);
    
};

