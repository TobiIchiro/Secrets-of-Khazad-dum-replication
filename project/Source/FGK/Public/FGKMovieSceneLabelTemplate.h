#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "FGKMovieSceneLabelTemplate.generated.h"

class UFGKMovieSceneLabelSection;

USTRUCT(BlueprintType)
struct FFGKMovieSceneLabelTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKMovieSceneLabelSection* Section;
    
    FGK_API FFGKMovieSceneLabelTemplate();
};

