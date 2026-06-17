#include "FGKOption.h"

UFGKOption::UFGKOption() {
}

void UFGKOption::SetString(const FString& InValue, bool bMarkAsChanged, bool bFireDelegates) {
}

void UFGKOption::SetInt(int32 InValue) {
}

void UFGKOption::SetFloat(float InValue) {
}

void UFGKOption::SetBool(bool InValue) {
}




TArray<FFGKOptionLabeledValue> UFGKOption::GetValues() const {
    return TArray<FFGKOptionLabeledValue>();
}

FString UFGKOption::GetString() const {
    return TEXT("");
}

FName UFGKOption::GetOptionName() const {
    return NAME_None;
}

FFGKOptionDefinition UFGKOption::GetOptionDefinition() const {
    return FFGKOptionDefinition{};
}

int32 UFGKOption::GetInt() const {
    return 0;
}

float UFGKOption::GetFloat() const {
    return 0.0f;
}

FString UFGKOption::GetCleanName() const {
    return TEXT("");
}

bool UFGKOption::GetBool() const {
    return false;
}


