#include "FGKBookmark.h"

AFGKBookmark::AFGKBookmark(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

FString AFGKBookmark::GetUniqueNameAsString() const {
    return TEXT("");
}

FName AFGKBookmark::GetBindingKey() const {
    return NAME_None;
}

int32 AFGKBookmark::GetAllBookmarks(UObject* WorldContext, TArray<AFGKBookmark*>& Bookmarks) {
    return 0;
}


