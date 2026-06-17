#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FGKGlobalManagerInterface.h"
#include "FGKOptionManager.generated.h"

class UDataTable;
class UFGKOption;
class UGameUserSettings;

UCLASS(Blueprintable)
class FGK_API UFGKOptionManager : public UObject, public IFGKGlobalManagerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* OptionData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameUserSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UFGKOption*> OptionMap;
    
public:
    UFGKOptionManager();

    UFUNCTION(BlueprintCallable)
    void SaveSync(bool bPopContextOnSuccess);
    
    UFUNCTION(BlueprintCallable)
    void Save(bool bPopContextOnSuccess);
    
    UFUNCTION(BlueprintCallable)
    void PushContext();
    
    UFUNCTION(BlueprintCallable)
    void PopContext(bool bRevertValues);
    
    UFUNCTION(BlueprintCallable)
    void LoadSync();
    
    UFUNCTION(BlueprintCallable)
    void Load();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetResolutions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFGKOption* GetOption(FName OptionId) const;
    

    // Fix for true pure virtual functions not being implemented
};

