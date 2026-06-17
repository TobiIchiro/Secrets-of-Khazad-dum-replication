#include "VoxelExample_Cave.h"

UVoxelExample_Cave::UVoxelExample_Cave() {
    this->Bottom_Noise_Frequency = 0.01f;
    this->Bottom_Noise_Scale = 150.00f;
    this->Bottom_Noise_Seed = 3024;
    this->Global_Height_Seed = 1447;
    this->Top_Noise_Seed = 3022;
    this->Top_Noise_Frequency = 0.00f;
    this->Top_Noise_Scale = 150.00f;
    this->Bottom_Top_Merge_Smoothness = 25.00f;
    this->Global_Height_Merge_Smoothness = 15.00f;
    this->Global_Height_Noise_Frequency = 0.00f;
    this->Global_Height_Noise_Scale = 200.00f;
    this->Global_Height_Offset = 150.00f;
    this->Cave_Height = 100.00f;
    this->Cave_Radius = 400.00f;
    this->Cave_Walls_Smoothness = 100.00f;
}


