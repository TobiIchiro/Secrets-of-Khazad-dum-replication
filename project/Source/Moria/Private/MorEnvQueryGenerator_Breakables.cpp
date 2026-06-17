#include "MorEnvQueryGenerator_Breakables.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "MorEnvQueryItemType_Breakable.h"

UMorEnvQueryGenerator_Breakables::UMorEnvQueryGenerator_Breakables() {
    this->ItemType = UMorEnvQueryItemType_Breakable::StaticClass();
    this->bTestAllBreakables = false;
    this->BoxBoundsCenter = UEnvQueryContext_Querier::StaticClass();
    this->SearchExtent = EBreakableSearchExtent::MorAISettings;
    this->bItemIsInBase = true;
    this->bItemIsReceptacle = false;
    this->bItemIsAtFullHealth = false;
}


