#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FGKAnimChooserDataTable.generated.h"

class UFGKTestRow;

UCLASS(Blueprintable)
class FGK_API UFGKAnimChooserDataTable : public UDataTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFGKTestRow*> RefCountedClasses;
    
    UFGKAnimChooserDataTable();

};

