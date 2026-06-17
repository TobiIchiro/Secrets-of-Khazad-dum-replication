#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "EFGKStateSectionTargetType.h"
#include "FGKMovieSceneStateSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFGKMovieSceneStateSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* StateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldFinishOnTimelineEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFGKStateSectionTargetType TargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StateName;
    
public:
    UFGKMovieSceneStateSection();

};

