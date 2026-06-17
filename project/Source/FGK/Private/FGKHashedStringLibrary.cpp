#include "FGKHashedStringLibrary.h"

UFGKHashedStringLibrary::UFGKHashedStringLibrary() {
}

FFGKHashedString UFGKHashedStringLibrary::Conv_StringToFGKHashedString(const FString& String) {
    return FFGKHashedString{};
}

FFGKHashedString UFGKHashedStringLibrary::Conv_NameToFGKHashedString(const FName& Name) {
    return FFGKHashedString{};
}

FString UFGKHashedStringLibrary::Conv_FGKHashedStringToString(const FFGKHashedString& HashedString) {
    return TEXT("");
}

FName UFGKHashedStringLibrary::Conv_FGKHashedStringToName(const FFGKHashedString& HashedString) {
    return NAME_None;
}


