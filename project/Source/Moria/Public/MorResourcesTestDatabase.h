#pragma once
#include "CoreMinimal.h"
#include "MorDatabase.h"
#include "MorResourcesTestDatabase.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UMorResourcesTestDatabase : public UMorDatabase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* FakeContainersTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* FakeResourcesTable;
    
public:
    UMorResourcesTestDatabase();

};

