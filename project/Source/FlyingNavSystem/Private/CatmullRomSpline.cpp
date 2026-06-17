#include "CatmullRomSpline.h"

UCatmullRomSpline::UCatmullRomSpline() {
}

FVector UCatmullRomSpline::SampleSplineByParameter(const float T) const {
    return FVector{};
}

FVector UCatmullRomSpline::SampleSplineByDistance(const float Distance) const {
    return FVector{};
}

float UCatmullRomSpline::GetArcLength() const {
    return 0.0f;
}

bool UCatmullRomSpline::GenerateSpline(const TArray<FVector>& PathPoints) {
    return false;
}

float UCatmullRomSpline::FindParameterForDistance(float Distance) const {
    return 0.0f;
}

TArray<FVector> UCatmullRomSpline::EquidistantSamples(const float SampleLength) const {
    return TArray<FVector>();
}


