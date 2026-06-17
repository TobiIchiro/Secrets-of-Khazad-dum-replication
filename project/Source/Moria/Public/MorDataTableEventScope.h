#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MorDataTableDelegateDelegate.h"
#include "MorDataTableEventScope.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class MORIA_API UMorDataTableEventScope : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DelegateDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorDataTableDelegate CurrentDelegate;
    
public:
    UMorDataTableEventScope();

    UFUNCTION(BlueprintCallable)
    void RegisterForDataTableChange(FMorDataTableDelegate Delegate, UDataTable* InDataTable);
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

