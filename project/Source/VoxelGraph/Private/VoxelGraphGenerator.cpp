#include "VoxelGraphGenerator.h"

UVoxelGraphGenerator::UVoxelGraphGenerator() {
    this->Outputs = NULL;
    this->bAutomaticPreview = true;
    this->bShowFlowMergeAndFunctionsWarnings = true;
    this->bUseCppClassInsteadOfGraph = false;
    this->bCompileToCppOnSave = false;
    this->bBuiltinPluginGenerator = false;
    this->bEnableRangeAnalysis = true;
    this->bEnableDebugGraph = false;
    this->bShowFunctions = false;
    this->bDetailedErrors = false;
    this->bShowPinsIds = false;
    this->bShowAxisDependencies = false;
    this->DebugLevel = EVoxelGraphGeneratorDebugLevel::BeforeMacroInlining;
    this->TargetToDebug = TEXT("Value");
    this->FunctionToDebug = 0;
    this->AxisDependenciesToDebug = EVoxelFunctionAxisDependencies::X;
    this->NodesDepthScaleFactor = 1.00f;
    this->bHideDataNodes = false;
    this->FirstNode = NULL;
    this->PreviewSettings = NULL;
}


