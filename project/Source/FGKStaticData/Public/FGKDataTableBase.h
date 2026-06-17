#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKDataTableBase.generated.h"

class UDataTable;
class UFGKAdditiveDataTable;

UCLASS(Abstract, Blueprintable)
class FGKSTATICDATA_API UFGKDataTableBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* TableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* TestTableAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKAdditiveDataTable* DynamicTableAsset;
    
public:
    UFGKDataTableBase();

};

