#include "MorAgenticFriendConf.h"

UMorAgenticFriendConf::UMorAgenticFriendConf() {
    this->AgenticStartingCmd = TEXT("ke BP_PMoriaAgenticTest_C RunTest 0 Inference true");
    this->AWSJenkinsIP = TEXT("54.215.77.204");
    this->JenkinsUsername = TEXT("admin");
    this->JenkinsApiToken = TEXT("117109af37feef363acfe8b20574988353");
    this->ArgsToLocalClient = TEXT("-log -WINDOWED -RESX=800 -RESY=540 --Mor.Net.NullOnlineSubsystem -NullRHI -AgenticBot");
}


