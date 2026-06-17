#pragma once
#include "CoreMinimal.h"
#include "MorDatabase.h"
#include "MorDamageModifierTestDatabase.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UMorDamageModifierTestDatabase : public UMorDatabase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* FakeDamageModifiersTable;
    
public:
    UMorDamageModifierTestDatabase();

};

