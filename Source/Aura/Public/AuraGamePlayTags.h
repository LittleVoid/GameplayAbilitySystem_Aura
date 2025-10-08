// Copyright VoidCraft

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

/**
 * AuraGameplayTags
 *
 * Singleton containing native Gameplay Tags
 */

struct FAuraGamePlayTags
{
public:
	static const FAuraGamePlayTags& Get() { return GameplayTags;}
	static void InitializeNativeGameplayTags();
protected:
private:
	static FAuraGamePlayTags GameplayTags;
};