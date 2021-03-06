// Fill out your copyright notice in the Description page of Project Settings.

#include "PSIProject.h"
#include "PoseidonCharacter.h"
#include "AN_HarpoonReload.h"


void UAN_HarpoonReload::Notify(USkeletalMeshComponent* SkeletalComp, UAnimSequenceBase* Animation)
{

	if (SkeletalComp)
	{
		APoseidonCharacter* Player = Cast<APoseidonCharacter>(SkeletalComp->GetOwner());
		if (Player)
		{
			Player->HarpoonReload();
		}
	}

}

