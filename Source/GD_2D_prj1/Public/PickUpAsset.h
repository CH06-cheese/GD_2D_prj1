// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */

UCLASS() {
class GD_2D_PRJ1_API UPickUpAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	

	void UPickAsset();

protected:

	UPROPERTY(FString ItemName;)
	UPROPERTY(Int Quantitiy;)
	UPROPERTY(UPaperSprite* Icon;)


};

