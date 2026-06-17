#include "FGKActionEffect_PauseAnim.h"
#include "FGKBaseCharacter.h"

UFGKActionEffect_PauseAnim::UFGKActionEffect_PauseAnim() {
    this->OwnerClass = AFGKBaseCharacter::StaticClass();
    this->PauseTime = 0.25f;
}

void UFGKActionEffect_PauseAnim::OnTimerEnd(UAnimInstance* Instance, UAnimMontage* Montage) {
}


