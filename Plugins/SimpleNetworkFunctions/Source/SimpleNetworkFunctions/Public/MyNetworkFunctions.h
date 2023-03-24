#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyNetworkFunctions.generated.h"


UCLASS()
class SIMPLENETWORKFUNCTIONS_API UMyNetworkFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	* Function that returns LAN IP addres
	*/
	UFUNCTION(BlueprintCallable, Category = "Networking", meta = (DisplayName = "Get LAN IP address", Description = "Function that returns LAN IP addres"))
		static FString GetLocalIPAddress();
	
	/**
	* A function that returns a bool whether the system is connected to LAN.
	*/
	UFUNCTION(BlueprintCallable, Category = "Networking", meta = (DisplayName = "Is connected to LAN?", Description="A function that returns a bool whether the system is connected to LAN."))
		static bool IsLanConnected();

};