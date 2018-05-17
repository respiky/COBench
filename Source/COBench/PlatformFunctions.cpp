// Fill out your copyright notice in the Description page of Project Settings.

#include "COBench.h"
#include "PlatformFunctions.h"

FString UPlatformFunctions::GetCPUBrandName()
{
	return FWindowsPlatformMisc::GetCPUBrand();
}

FString UPlatformFunctions::GetCPUVendorName()
{
	return FWindowsPlatformMisc::GetCPUVendor();
}

FString UPlatformFunctions::GetGPUBrandName()
{
	return FWindowsPlatformMisc::GetPrimaryGPUBrand();
}

int32 UPlatformFunctions::GetCPUCores()
{
	return FWindowsPlatformMisc::NumberOfCores();
}


