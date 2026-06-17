#include "MorNavMeshEdgeProps.h"

FMorNavMeshEdgeProps::FMorNavMeshEdgeProps() {
    this->EdgeUpOffset = 0.00f;
    this->MinHorizontalDistance = 0.00f;
    this->MaxHorizontalDistance = 0.00f;
    this->MaxEdgeSlope = 0.00f;
    this->MinEdgeSegmentLength = 0.00f;
    this->SegmentCheckSampleSpan = 0.00f;
    this->MinVerticalDistance = 0.00f;
    this->MaxVerticalDistance = 0.00f;
    this->VerticalCheckSpan = 0.00f;
    this->EntryPointDisplacementFromEdge = 0.00f;
    this->MaxVerticalDistanceBetweenLedges = 0.00f;
    this->MaxHorizontalJumpDistance = 0.00f;
    this->NumTraceSamplesPerEdgeSegmentPair = 0;
    this->EdgeSegmentPairTraceVerticalHeight = 0.00f;
    this->EdgeSegmentPairTraceVerticalOffset = 0.00f;
}

