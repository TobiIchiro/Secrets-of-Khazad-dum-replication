#include "FGKLevelSequenceActor.h"
#include "FGKLevelSequencePlayerFSM.h"

AFGKLevelSequenceActor::AFGKLevelSequenceActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UFGKLevelSequencePlayerFSM>(TEXT("FGKAnimationPlayer"))) {
    this->NetDormancy = DORM_DormantAll;
}


