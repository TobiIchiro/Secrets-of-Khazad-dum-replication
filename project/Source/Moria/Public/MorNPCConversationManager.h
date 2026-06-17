#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorConversationData.h"
#include "MorConversationVariantData.h"
#include "MorNPCConversationRowHandle.h"
#include "MorReplicatedManager.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectId.h"
#include "MorSaveGameObjectNative.h"
#include "MorNPCConversationManager.generated.h"

class UMorNPCConversationComponent;

UCLASS(Blueprintable)
class MORIA_API AMorNPCConversationManager : public AMorReplicatedManager, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorSaveGameObjectId SaveGameObjectId;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, TWeakObjectPtr<UMorNPCConversationComponent>> ConversationComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorConversationData> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorNPCConversationRowHandle> Unlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMorConversationVariantData> VariantsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMorConversationData DummyConversationData;
    
public:
    AMorNPCConversationManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


    // Fix for true pure virtual functions not being implemented
};

