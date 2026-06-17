#pragma once
#include "CoreMinimal.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "FGKMovieSceneTrack.h"
#include "FGKMovieSceneStateTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFGKMovieSceneStateTrack : public UFGKMovieSceneTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UFGKMovieSceneStateTrack();


    // Fix for true pure virtual functions not being implemented
protected:
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
};

