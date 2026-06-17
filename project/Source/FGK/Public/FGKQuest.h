#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RequirementDetails.h"
#include "FGKQuest.generated.h"

class AFGKBaseCharacter;
class UFGKQuestRequirement;

UCLASS(Blueprintable)
class FGK_API UFGKQuest : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFGKQuestRequirement* Requirement;
    
public:
    UFGKQuest();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRequirementDetails> GetRequirementDetails() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFGKBaseCharacter* GetCompleter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBlurb() const;
    
};

