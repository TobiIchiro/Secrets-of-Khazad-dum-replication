#pragma once
#include "CoreMinimal.h"
#include "FGKAssetCheckCommandlet.h"
#include "MorInitChapterTableCommandlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class MORIA_API UMorInitChapterTableCommandlet : public UFGKAssetCheckCommandlet {
    GENERATED_BODY()
public:
    UMorInitChapterTableCommandlet();

};

