#include "FGKBatchCharaterAnimInstanceEvaluator.h"

UFGKBatchCharaterAnimInstanceEvaluator::UFGKBatchCharaterAnimInstanceEvaluator() {
    this->MinCpuCountBatch = 4;
    this->CpuCountBatchMultiplier = 2.00f;
    this->MinBatchSize = -1;
    this->MaxBatchSize = -1;
}


