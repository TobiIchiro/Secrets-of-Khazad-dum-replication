#include "MorAIEnvQueryGenerator_SurroundingCells.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UMorAIEnvQueryGenerator_SurroundingCells::UMorAIEnvQueryGenerator_SurroundingCells() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->SearchCenter = UEnvQueryContext_Querier::StaticClass();
}


