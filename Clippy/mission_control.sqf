#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[] spawn {
	waitUntil { sleep 0.5; time > 0 }; // Mission start
	sleep 1;
	{
		_z = getAssignedCuratorUnit (allCurators select _forEachIndex);
		if(!isNull (getAssignedCuratorLogic player)) then {
			hint "Press Ctrl-Shift-C\nto create a Clippy Broadcast";
			["Clippy","clippy_broadcast", "Create Clippy Broadcast", {
				createDialog "Clippy_dialog";
			}, "", [DIK_C, [true, true, false]]] call CBA_fnc_addKeybind;
		};
	} forEach allCurators;
};
