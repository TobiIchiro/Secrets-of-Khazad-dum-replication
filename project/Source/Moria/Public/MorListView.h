#pragma once
#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "MorListView.generated.h"

class UObject;

UCLASS(Blueprintable)
class MORIA_API UMorListView : public UListView {
    GENERATED_BODY()
public:
    UMorListView();

    UFUNCTION(BlueprintCallable)
    void InsertItem(UObject* Item, int32 Where);
    
};

