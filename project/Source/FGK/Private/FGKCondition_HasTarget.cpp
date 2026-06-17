#include "FGKCondition_HasTarget.h"

UFGKCondition_HasTarget::UFGKCondition_HasTarget() {
    this->bFilterBasedOnRelativePosition = false;
    this->MinRange = 0.00f;
    this->MaxRange = 340282346638528859811704183484516925440.00f;
    this->MinOffsetZ = -340282346638528859811704183484516925440.00f;
    this->MaxOffsetZ = 340282346638528859811704183484516925440.00f;
    this->MinOffsetY = -340282346638528859811704183484516925440.00f;
    this->MaxOffsetY = 340282346638528859811704183484516925440.00f;
    this->MinOffsetX = -340282346638528859811704183484516925440.00f;
    this->MaxOffsetX = 340282346638528859811704183484516925440.00f;
    this->MinSizeZ = -1.00f;
    this->MaxSizeZ = -1.00f;
}


