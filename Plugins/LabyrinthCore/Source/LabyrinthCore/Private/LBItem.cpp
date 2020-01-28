// Fill out your copyright notice in the Description page of Project Settings.


#include "LBItem.h"

FString ULBItem::GetIdentifierString() const
{
	return GetPrimaryAssetId().ToString();
}

FPrimaryAssetId ULBItem::GetPrimaryAssetId() const
{
	// This is a DataAsset and not a blueprint so we can just use the raw FName
	// For blueprints you need to handle stripping the _C suffix
	return FPrimaryAssetId(ItemType, GetFName());
}