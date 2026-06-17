#include "MorAISense_Torch.h"
#include "Perception/AIPerceptionTypes.h"

UMorAISense_Torch::UMorAISense_Torch() {
    this->NotifyType = EAISenseNotifyType::OnEveryPerception;
    this->bAutoRegisterAllPawnsAsSources = false;
}


