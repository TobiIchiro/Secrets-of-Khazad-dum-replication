#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MorSaveGameObjectCallbacksNative.h"
#include "MorSaveGameObjectNative.h"
#include "MorSongInstanceData.h"
#include "MorSongPerformanceData.h"
#include "MorSongJukeboxComponent.generated.h"

class UMorSongCategoryDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MORIA_API UMorSongJukeboxComponent : public UActorComponent, public IMorSaveGameObjectNative, public IMorSaveGameObjectCallbacksNative {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMorSongCategoryDefinition*> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FName, FMorSongPerformanceData> KnownSongs;
    
public:
    UMorSongJukeboxComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SongEnded(bool bIsAborted, uint8 SongID, const FMorSongInstanceData& SongInstanceData);
    
public:
    UFUNCTION(BlueprintCallable)
    void LearnSong(const FName& SongDefName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSongKnown(const FName& SongDefName) const;
    

    // Fix for true pure virtual functions not being implemented
};

