_msg = _this select 0;

if (_msg != "") then {
	missionNamespace setVariable ["CLIPPY_MESSAGE", _msg, true];
	// TODO: sound P:\a3\ui_f\data\sound\cfgingameui\hintexpand.wss
	[_msg, ["Clippy", "PLAIN"]] remoteExec ["cutRsc"];
};
