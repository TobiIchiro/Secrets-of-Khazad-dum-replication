#include "FGKCondition_HasLineOfSightToTarget.h"

UFGKCondition_HasLineOfSightToTarget::UFGKCondition_HasLineOfSightToTarget() {
    this->bTraceComplex = false;
    this->TraceChannel = ECC_Visibility;
    this->TraceMode = EFGKTraceMode::SINGLE_LINE_TRACE;
    this->SphereTraceRadius = 50.00f;
}


