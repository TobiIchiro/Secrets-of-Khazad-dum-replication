#pragma once
#include "CoreMinimal.h"
#include "UObject/Class.h"
#include "BugReportFormData.h"
#include "BugReporter.generated.h"

class UMoriaGameInstance;

UCLASS(Blueprintable)
class UBugReporter : public UClass {
    GENERATED_BODY()
public:
    UBugReporter();

    UFUNCTION(BlueprintCallable)
    static void SubmitBugReportToPragma(UMoriaGameInstance* Instance, FBugReportFormData ReportData);
    
};

