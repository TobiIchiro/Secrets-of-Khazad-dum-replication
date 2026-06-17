#include "ItemHandle.h"

FItemHandle::FItemHandle() {
    this->ID = 0;
    this->Payload = 0;
}

template<>
struct TStructOpsTypeTraits<FItemHandle> : public TStructOpsTypeTraitsBase2<FItemHandle>
{
    enum
    {
        WithGetTypeHash = true,
    };
};