#pragma once
#include "CoreMinimal.h"
#include "Compilation/IMovieSceneTrackTemplateProducer.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "FGKMovieSceneTrack.h"
#include "FGKMovieSceneLabelTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFGKMovieSceneLabelTrack : public UFGKMovieSceneTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UFGKMovieSceneLabelTrack();


    // Fix for true pure virtual functions not being implemented
protected:
    virtual FMovieSceneEvalTemplatePtr CreateTemplateForSection(const UMovieSceneSection& InSection) const override;
};

