#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorWorldLayoutCustomConfiguration.h"
#include "MorWorldsListUpdatedDelegate.h"
#include "MorWorldSelectionManager.generated.h"

class UMorWorldSelectItem;
class UMorWorldSelectionManager;

UCLASS(Blueprintable)
class MORIA_API UMorWorldSelectionManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWorldsListUpdated WorldsListLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWorldsListUpdated WorldsListUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMorWorldSelectItem*> Worlds;
    
public:
    UMorWorldSelectionManager();

    UFUNCTION(BlueprintCallable)
    void UpdateWorld(UMorWorldSelectItem* WorldItem);
    
    UFUNCTION(BlueprintCallable)
    void SelectWorld(UMorWorldSelectItem* WorldItem);
    
    UFUNCTION(BlueprintCallable)
    void RefreshWorlds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMorWorldSelectionManager* GetInstance(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    void DeleteWorld(UMorWorldSelectItem* WorldItem);
    
    UFUNCTION(BlueprintCallable)
    void CreateNewWorld(FMorWorldLayoutCustomConfiguration WorldConfig);
    
};

