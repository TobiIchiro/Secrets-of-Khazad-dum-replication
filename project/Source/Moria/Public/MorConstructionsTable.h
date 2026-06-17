#pragma once
#include "CoreMinimal.h"
#include "FGKDataTableBase.h"
#include "MorConstructionsTable.generated.h"

class AActor;

UCLASS(Blueprintable)
class MORIA_API UMorConstructionsTable : public UFGKDataTableBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AActor>, FName> ActorRowNameLookup;
    
public:
    UMorConstructionsTable();

};

