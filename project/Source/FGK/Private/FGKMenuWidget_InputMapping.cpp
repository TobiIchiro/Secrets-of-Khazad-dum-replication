#include "FGKMenuWidget_InputMapping.h"

UFGKMenuWidget_InputMapping::UFGKMenuWidget_InputMapping() {
    this->InputType = ECommonInputType::MouseAndKeyboard;
}

TMap<FString, FKey> UFGKMenuWidget_InputMapping::GetInputMappings() const {
    return TMap<FString, FKey>();
}


