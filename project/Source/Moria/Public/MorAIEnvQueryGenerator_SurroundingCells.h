#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "MorAIEnvQueryGenerator_SurroundingCells.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class MORIA_API UMorAIEnvQueryGenerator_SurroundingCells : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> SearchCenter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue Radius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue Height;
    
    UMorAIEnvQueryGenerator_SurroundingCells();

};

