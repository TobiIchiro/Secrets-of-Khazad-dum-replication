#include "MorTimedQueueFunctionLibrary.h"

UMorTimedQueueFunctionLibrary::UMorTimedQueueFunctionLibrary() {
}

int32 UMorTimedQueueFunctionLibrary::Num(const FMorTimedQueue& Queue) {
    return 0;
}

bool UMorTimedQueueFunctionLibrary::IsRunning(const FMorTimedQueue& Queue) {
    return false;
}

float UMorTimedQueueFunctionLibrary::GetTotalRemainingDuration(const FMorTimedQueue& Queue) {
    return 0.0f;
}

float UMorTimedQueueFunctionLibrary::GetItemRemainingDuration(const FMorTimedQueue& Queue) {
    return 0.0f;
}

bool UMorTimedQueueFunctionLibrary::CanRunForever(const FMorTimedQueue& Queue) {
    return false;
}


