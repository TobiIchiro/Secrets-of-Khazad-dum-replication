#include "FGKActionEffect_ForceFeedback.h"
#include "FGKBaseCharacter.h"

UFGKActionEffect_ForceFeedback::UFGKActionEffect_ForceFeedback() {
    this->OwnerClass = AFGKBaseCharacter::StaticClass();
    this->FeedbackEffect = NULL;
}


