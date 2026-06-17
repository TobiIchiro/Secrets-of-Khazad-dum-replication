#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "FGKMovieSceneLabelSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFGKMovieSceneLabelSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LabelName;
    
public:
    UFGKMovieSceneLabelSection();

};

