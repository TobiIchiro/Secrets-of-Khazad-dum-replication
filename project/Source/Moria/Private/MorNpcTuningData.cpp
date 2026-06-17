#include "MorNpcTuningData.h"

UMorNpcTuningData::UMorNpcTuningData() {
    this->MinerDeliveryInterval = 30.00f;
    this->MinerDeliveryQuantity = 3.00f;
    this->TinkerMaterialRecoverRate = 0.25f;
    this->ResearchRequired = 300.00f;
    this->ResearchCraftRequired = 180.00f;
    this->RecreateActivityPointTickFrequencyInSeconds = 45.00f;
    this->MinerDeliveriesPerHour = 1.00f;
    this->GatherBasicPerHour = 2.00f;
    this->GrocerCollectPerHour = 2.00f;
    this->MasonRepairPerHour = 2.00f;
    this->MetalworkerIngotsPerHour = 2.00f;
    this->BrewerAlesPerHour = 0.12f;
    this->TinkerRecyclePerHour = 5.00f;
    this->BlacksmithCraftsPerHour = 1.00f;
    this->ArtisanCraftsPerHour = 1.00f;
    this->TailorCraftsPerHour = 0.50f;
    this->BuilderWorkPerHour = 25.00f;
    this->BuilderActivityPointGenerationChance = 0.25f;
    this->ResearcherProgressPerHour = 45.00f;
    this->ResearchOfflineHoursNeeded = 3.00f;
    this->OfflinePrideMode = EMorNpcOfflinePrideMode::Cap;
    this->OfflinePridePerMeal = 8.00f;
    this->OfflinePridePerWorkHour = 0.25f;
    this->MaxCommonGreetingAccumulator = 3.00f;
    this->CommonGreetingsPerHour = 0.50f;
    this->GreetingsPerHour = 0.25f;
    this->PrideSleepThreshold = 36;
    this->PrideWorkThreshold = -1;
    this->PrideEatThreshold = 36;
    this->PrideDrinkThreshold = -1;
    this->RecruitCostPerSkill = 100;
    this->RecruitCostForJackOfAllTrades = 600;
    this->OfflineProduction_BuilderValidRangeForMonument = 19000.00f;
    this->DelayAfterConversationGameMinutes = 60;
    this->SpeechIconVisibilityDistance = 1000.00f;
}


