#include "MorNpcUtils.h"

UMorNpcUtils::UMorNpcUtils() {
}

bool UMorNpcUtils::IsRoleValidForNpcEquipment(const FMorNPCRoleDefinition& RoleDefinition, const AMorCharacter* NPC) {
    return false;
}

bool UMorNpcUtils::IsRoleValidForNPC(const FMorNPCRoleDefinition& RoleDefinition, const AMorCharacter* NPC) {
    return false;
}

FMorNPCTraitRowHandle UMorNpcUtils::GetTraitHandle(const FMorNPCTraitDefinition& TraitDefinition) {
    return FMorNPCTraitRowHandle{};
}

FMorNPCTraitDefinition UMorNpcUtils::GetTraitDefinition(const FMorNPCTraitRowHandle& TraitHandle) {
    return FMorNPCTraitDefinition{};
}

FMorNPCSkillRowHandle UMorNpcUtils::GetSkillHandle(const FMorNPCSkillDefinition& SkillDefinition) {
    return FMorNPCSkillRowHandle{};
}

FMorNPCSkillDefinition UMorNpcUtils::GetSkillDefinition(const FMorNPCSkillRowHandle& SkillHandle) {
    return FMorNPCSkillDefinition{};
}

TArray<FMorNPCRoleRowHandle> UMorNpcUtils::GetRolesForNPC(const AMorCharacter* NPC) {
    return TArray<FMorNPCRoleRowHandle>();
}

FMorNPCRoleRowHandle UMorNpcUtils::GetRoleHandle(const FMorNPCRoleDefinition& RoleDefinition) {
    return FMorNPCRoleRowHandle{};
}

FMorNPCRoleDefinition UMorNpcUtils::GetRoleDefinition(const FMorNPCRoleRowHandle& RoleHandle) {
    return FMorNPCRoleDefinition{};
}

FText UMorNpcUtils::GetNpcRole(const UObject* WorldContextObject, FGuid NpcGuid) {
    return FText::GetEmpty();
}

FText UMorNpcUtils::GetNpcName(const UObject* WorldContextObject, FGuid NpcGuid) {
    return FText::GetEmpty();
}

int32 UMorNpcUtils::GetNpcGoldCost(const UObject* WorldContextObject, FGuid NpcGuid) {
    return 0;
}

AMorCharacter* UMorNpcUtils::GetNpcCharacter(const UObject* WorldContextObject, FGuid NpcGuid) {
    return NULL;
}

FText UMorNpcUtils::GetNpcActivity(const UObject* WorldContextObject, FGuid NpcGuid) {
    return FText::GetEmpty();
}

UMorMerchantComponent* UMorNpcUtils::GetMerchantComponent(AActor* Actor) {
    return NULL;
}

FMorNPCConversationTextDefinition UMorNpcUtils::GetConversationTextDefinition(const FMorNPCConversationTextRowHandle& TextHandle) {
    return FMorNPCConversationTextDefinition{};
}

TArray<FMorNPCRoleRowHandle> UMorNpcUtils::GetAllRoles() {
    return TArray<FMorNPCRoleRowHandle>();
}

TArray<FMorNPCConversationRowHandle> UMorNpcUtils::GetAllConversations() {
    return TArray<FMorNPCConversationRowHandle>();
}

FMorNPCActivityRowHandle UMorNpcUtils::GetActivityHandle(const FMorNPCActivityDefinition& ActivityDefinition) {
    return FMorNPCActivityRowHandle{};
}

FMorNPCActivityDefinition UMorNpcUtils::GetActivityDefinition(const FMorNPCActivityRowHandle& ActivityHandle) {
    return FMorNPCActivityDefinition{};
}

FMorNPCActivityDefinition UMorNpcUtils::GetActivityData(EMorNpcActivity Activity) {
    return FMorNPCActivityDefinition{};
}

void UMorNpcUtils::DismissNPC(const UMorNPCComponent* NPC) {
}


