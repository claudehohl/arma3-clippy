#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[] spawn {
	sleep 1;
	if(!isNull (getAssignedCuratorLogic player)) then {
		hint "Press Ctrl-Shift-C\nto create a Clippy Broadcast";
		["Clippy","clippy_broadcast", "Create Clippy Broadcast", {
			createDialog "Clippy_dialog";
		}, "", [DIK_C, [true, true, false]]] call CBA_fnc_addKeybind;
	};
};