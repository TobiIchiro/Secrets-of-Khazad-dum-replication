#include "FGKCondition_HealthInRange.h"

UFGKCondition_HealthInRange::UFGKCondition_HealthInRange() {
    this->HealthComponent = NULL;
    this->bPercentage = false;
    this->MinValue = 0.00f;
    this->MaxValue = 100.00f;
}


