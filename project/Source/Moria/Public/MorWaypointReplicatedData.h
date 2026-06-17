#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MorWaypointReplicatedFlags.h"
#include "MorWaypointReplicatedInvariableProperties.h"
#include "MorWaypointReplicatedPlayerState.h"
#include "MorWaypointReplicatedData.generated.h"

USTRUCT(BlueprintType)
struct FMorWaypointReplicatedData : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWaypointReplicatedInvariableProperties InvariableProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CustomDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WaypointIconName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWaypointReplicatedFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMorWaypointReplicatedPlayerState PlayerState;
    
    MORIA_API FMorWaypointReplicatedData();
};

