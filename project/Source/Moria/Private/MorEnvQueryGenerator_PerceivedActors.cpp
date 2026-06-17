#include "MorEnvQueryGenerator_PerceivedActors.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Actor.h"

UMorEnvQueryGenerator_PerceivedActors::UMorEnvQueryGenerator_PerceivedActors() {
    this->ItemType = UEnvQueryItemType_Actor::StaticClass();
    this->AllowedActorClass = NULL;
    this->ListenerContext = UEnvQueryContext_Querier::StaticClass();
    this->SenseToUse = NULL;
    this->bIncludeKnownActors = true;
}


