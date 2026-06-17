#pragma once
#include "CoreMinimal.h"
#include "IpConnection.h"
#include "MorIpConnection.generated.h"

UCLASS(Blueprintable, NonTransient)
class MORIA_API UMorIpConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UMorIpConnection();

};

