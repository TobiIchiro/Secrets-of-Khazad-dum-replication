#include "FGKHealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UFGKHealthComponent::UFGKHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Health = 100.00f;
    this->MaxHealth = 100.00f;
    this->bRegenHealthRatio = false;
    this->RegenPerTick = 0.00f;
    this->RegenTickDelay = 0.25f;
    this->RegenStartDelay = 10.00f;
    this->bAcceptedAllDamageTypes = true;
    this->bDefaultAcceptedAllDamageTypes = true;
    this->Killer = NULL;
    this->bShouldKillWithAcceptedDamageType = false;
    this->LastTimeDamaged = -340282346638528859811704183484516925440.00f;
    this->MinHealth = 0.00f;
}

void UFGKHealthComponent::SetHealthRatio(float NewHealthRatio, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* HealthChangeCauser) {
}

void UFGKHealthComponent::SetHealth(float NewHealth, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* HealthChangeCauser) {
}

void UFGKHealthComponent::Server_Kill_Implementation() {
}

void UFGKHealthComponent::Server_HealToMax_Implementation() {
}

void UFGKHealthComponent::Server_HealthChanged_Implementation(UFGKHealthComponent* HealthComp, float HealthValue, float HealthDelta, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UFGKHealthComponent::Server_Die_Implementation(UFGKHealthComponent* HealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UFGKHealthComponent::Multicast_HealthChanged_Implementation(UFGKHealthComponent* HealthComp, float HealthValue, float HealthDelta, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UFGKHealthComponent::Multicast_Die_Implementation(UFGKHealthComponent* HealthComp, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UFGKHealthComponent::Kill() {
}

bool UFGKHealthComponent::IsMaxHealth() const {
    return false;
}

void UFGKHealthComponent::HealToMax() {
}

void UFGKHealthComponent::Heal(float HealAmount, AController* InstigatedBy, AActor* HealCauser) {
}

float UFGKHealthComponent::GetMaxHealth() const {
    return 0.0f;
}

float UFGKHealthComponent::GetHealthRatio() const {
    return 0.0f;
}

float UFGKHealthComponent::GetHealth() const {
    return 0.0f;
}

void UFGKHealthComponent::Damage(float NewDamage, TSubclassOf<UDamageType> DamageType, AController* InstigatedBy, AActor* DamageCauser) {
}

void UFGKHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFGKHealthComponent, Health);
    DOREPLIFETIME(UFGKHealthComponent, MaxHealth);
    DOREPLIFETIME(UFGKHealthComponent, bAcceptedAllDamageTypes);
    DOREPLIFETIME(UFGKHealthComponent, AcceptedDamageTypes);
    DOREPLIFETIME(UFGKHealthComponent, BlacklistedDamageTypes);
    DOREPLIFETIME(UFGKHealthComponent, Killer);
    DOREPLIFETIME(UFGKHealthComponent, DamageCausers);
    DOREPLIFETIME(UFGKHealthComponent, MinHealth);
}


