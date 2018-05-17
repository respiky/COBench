// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "PlatformFunctions.generated.h"

/**
 * 
 */
UCLASS()
class COBENCH_API UPlatformFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get CPU Brand Name", Keywords = "CPU brand"), Category = Game) //Set your category
		static FString GetCPUBrandName();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get CPU Vendor Name", Keywords = "CPU vendor"), Category = Game)
		static FString GetCPUVendorName();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get GPU Brand Name", Keywords = "GPU brand"), Category = Game)
		static FString GetGPUBrandName();

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Number of CPU Cores", Keywords = "CPU cores"), Category = Game)
		static int32 GetCPUCores();
	
	
};
