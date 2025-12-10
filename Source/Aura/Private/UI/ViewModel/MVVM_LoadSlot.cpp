// Copyright VoidCraft


#include "UI/ViewModel/MVVM_LoadSlot.h"

void UMVVM_LoadSlot::InittializeSlot()
{
	// TODO: Check slot status based on loaded data
	SetWidgetSwitcherIndex.Broadcast(1);
}
