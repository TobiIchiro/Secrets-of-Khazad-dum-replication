#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FGKDatabase.generated.h"

class UFGKDataTableBase;

UCLASS(Abstract, Blueprintable)
class FGKSTATICDATA_API UFGKDatabase : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UFGKDataTableBase*> DataTables;
    
public:
    UFGKDatabase();

};

