#include "FGKAICondition_HasBlackboardValueBase.h"

UFGKAICondition_HasBlackboardValueBase::UFGKAICondition_HasBlackboardValueBase() {
    this->bMatchValue = false;
    this->BlackboardComponent = NULL;
    this->KeyID = 255;
}


