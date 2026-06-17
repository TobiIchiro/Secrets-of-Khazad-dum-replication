#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ConversationBPLibrary.generated.h"

class UDataTable;
class UStringTable;

UCLASS(Blueprintable)
class MORIA_API UConversationBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConversationBPLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void ImportConversation(const FString& CommaSeparatedValues, UDataTable* DataTableConversation, UDataTable* DataTableConversationText, UStringTable* StringTableConversations);
    
};

