#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "FGKMovieSceneTrack.generated.h"

class UMovieSceneSection;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UFGKMovieSceneTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAMasterTrack: 1;
    
public:
    UFGKMovieSceneTrack();

};

