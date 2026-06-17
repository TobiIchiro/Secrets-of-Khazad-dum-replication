#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EMorNpcActivity.h"
#include "MorNPCActivityDefinition.h"
#include "MorNPCActivityRowHandle.h"
#include "MorNPCConversationRowHandle.h"
#include "MorNPCConversationTextDefinition.h"
#include "MorNPCConversationTextRowHandle.h"
#include "MorNPCRoleDefinition.h"
#include "MorNPCRoleRowHandle.h"
#include "MorNPCSkillDefinition.h"
#include "MorNPCSkillRowHandle.h"
#include "MorNPCTraitDefinition.h"
#include "MorNPCTraitRowHandle.h"
#include "MorNpcUtils.generated.h"

class AActor;
class AMorCharacter;
class UMorMerchantComponent;
class UMorNPCComponent;
class UObject;

UCLASS(Blueprintable)
class MORIA_API UMorNpcUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMorNpcUtils();

    UFUNCTION(BlueprintCallable)
    static bool IsRoleValidForNpcEquipment(const FMorNPCRoleDefinition& RoleDefinition, const AMorCharacter* NPC);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRoleValidForNPC(const FMorNPCRoleDefinition& RoleDefinition, const AMorCharacter* NPC);
    
    UFUNCTION(BlueprintCallable)
    static FMorNPCTraitRowHandle GetTraitHandle(const FMorNPCTraitDefinition& TraitDefinition);
    
    UFUNCTION(BlueprintCallable)
    static FMorNPCTraitDefinition GetTraitDefinition(const FMorNPCTraitRowHandle& TraitHandle);
    
    UFUNCTION(BlueprintCallable)
    static FMorNPCSkillRowHandle GetSkillHandle(const FMorNPCSkillDefinition& SkillDefinition);
    
    UFUNCTION(BlueprintCallable)
    static FMorNPCSkillDefinition GetSkillDefinition(const FMorNPCSkillRowHandle& SkillHandle);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMorNPCRoleRowHandle> GetRolesForNPC(const AMorCharacter* NPC);
    
    UFUNCTION(BlueprintCallable)
    static FMorNPCRoleRowHandle GetRoleHandle(const FMorNPCRoleDefinition& RoleDefinition);
    
    UFUNCTION(BlueprintCallable)
    static FMorNPCRoleDefinition GetRoleDefinition(const FMorNPCRoleRowHandle& RoleHandle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FText GetNpcRole(const UObject* WorldContextObject, FGuid NpcGuid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FText GetNpcName(const UObject* WorldContextObject, FGuid NpcGuid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetNpcGoldCost(const UObject* WorldContextObject, FGuid NpcGuid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AMorCharacter* GetNpcCharacter(const UObject* WorldContextObject, FGuid NpcGuid);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FText GetNpcActivity(const UObject* WorldContextObject, FGuid NpcGuid);
    
    UFUNCTION(BlueprintCallable)
    static UMorMerchantComponent* GetMerchantComponent(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static FMorNPCConversationTextDefinition GetConversationTextDefinition(const FMorNPCConversationTextRowHandle& TextHandle);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMorNPCRoleRowHandle> GetAllRoles();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMorNPCConversationRowHandle> GetAllConversations();
    
    UFUNCTION(BlueprintCallable)
    static FMorNPCActivityRowHandle GetActivityHandle(const FMorNPCActivityDefinition& ActivityDefinition);
    
    UFUNCTION(BlueprintCallable)
    static FMorNPCActivityDefinition GetActivityDefinition(const FMorNPCActivityRowHandle& ActivityHandle);
    
    UFUNCTION(BlueprintCallable)
    static FMorNPCActivityDefinition GetActivityData(EMorNpcActivity Activity);
    
    UFUNCTION(BlueprintCallable)
    static void DismissNPC(const UMorNPCComponent* NPC);
    
};

