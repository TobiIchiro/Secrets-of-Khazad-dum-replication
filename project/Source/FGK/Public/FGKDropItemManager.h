#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemHandle.h"
#include "Templates/SubclassOf.h"
#include "FGKDropItemManager.generated.h"

UCLASS(Blueprintable)
class FGK_API AFGKDropItemManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> DefaultDropItemClass;
    
public:
    AFGKDropItemManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    int32 GetSortingPriority(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSortCombineStacksAmount(const FItemHandle& ItemA, const FItemHandle& ItemB, int32 Mode);
    
    UFUNCTION(BlueprintCallable)
    FName GetNameForItemHandle(const FItemHandle& Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 CompareItems(const FItemHandle& ItemA, const FItemHandle& ItemB, int32 Mode);
    
};

