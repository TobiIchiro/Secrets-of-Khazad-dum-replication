#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "CatmullRomSpline.generated.h"

UCLASS(Blueprintable)
class UCatmullRomSpline : public UObject {
    GENERATED_BODY()
public:
    UCatmullRomSpline();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector SampleSplineByParameter(const float T) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector SampleSplineByDistance(const float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArcLength() const;
    
    UFUNCTION(BlueprintCallable)
    bool GenerateSpline(const TArray<FVector>& PathPoints);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float FindParameterForDistance(float Distance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> EquidistantSamples(const float SampleLength) const;
    
};

