#pragma once
#include "CoreMinimal.h"
#include "MorSongInstanceData.generated.h"

class AActor;
class UMorSongCategoryDefinition;
class UVoiceComponent;

USTRUCT(BlueprintType)
struct FMorSongInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMorSongCategoryDefinition* CategoryDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVoiceComponent* Leader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SourceActor;
    
    MORIA_API FMorSongInstanceData();
};

