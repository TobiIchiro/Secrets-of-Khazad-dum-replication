#include "VoxelTransformableGeneratorPicker.h"

FVoxelTransformableGeneratorPicker::FVoxelTransformableGeneratorPicker() {
    this->Type = EVoxelGeneratorPickerType::Class;
    this->Class = NULL;
    this->Object = NULL;
}

