#include "FGKEnvQueryGenerator_RectangularPrism.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UFGKEnvQueryGenerator_RectangularPrism::UFGKEnvQueryGenerator_RectangularPrism() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


