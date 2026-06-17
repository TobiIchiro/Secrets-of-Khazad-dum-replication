#include "MorCloudPlayerBlockList.h"

UMorCloudPlayerBlockList::UMorCloudPlayerBlockList() {
    this->DelayBeforeSaving = 2.00f;
    this->SavingBudget = 0.00f;
    this->OssName = TEXT("EOS");
    this->MaxCapacity = 2000;
}


