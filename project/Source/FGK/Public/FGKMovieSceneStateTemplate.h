#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "FGKMovieSceneStateTemplate.generated.h"

class UFGKMovieSceneStateSection;

USTRUCT(BlueprintType)
struct FFGKMovieSceneStateTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFGKMovieSceneStateSection* Section;
    
    FGK_API FFGKMovieSceneStateTemplate();
};

