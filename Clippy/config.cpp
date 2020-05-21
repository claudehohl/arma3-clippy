class CfgPatches
{
    class Clippy
    {
        // Meta information for editor
        name = "Clippy";
        author = "Shadow";
        url = "https://github.com/claudehohl/arma3-clippy";

        // Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
        requiredVersion = 1.60;
        // Required addons, used for setting load order.
        // When any of the addons is missing, pop-up warning will appear when launching the game.
        requiredAddons[] = {"A3_Functions_F", "cba_keybinding"};
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content unlocking.
        units[] = {};
        // List of weapons (CfgWeapons classes) contained in the addon.
        weapons[] = {};
    };
};

class CfgFunctions
{
    class Clippy
    {
        class General
        {
            // Functions to call during initialization. See https://community.bistudio.com/wiki/Functions_Library_(Arma_3)
            class ClippyInit
            {
                tag = "A3_Clippy";
                file = "\A3_Clippy\mission_control.sqf";
                postInit = 1;
                recompile = 1;
            };
        };
    };
};

class Clippy_dialog
{
    idd = 666;

    class ControlsBackground
    {

    };
    class Controls
    {
        class clippy_text
        {
            type = 2;
            idc = 111;
            x = safeZoneX + safeZoneW * 0.31835938;
            y = safeZoneY + safeZoneH * 0.27430556;
            w = safeZoneW * 0.36328125;
            h = safeZoneH * 0.28125;
            style = 0+16;
            text = "";
            maxChars = 130;
            autocomplete = "";
            lineSpacing = 1;
            colorBackground[] = {1,1,0.302,1};
            colorDisabled[] = {0.2,0.2,0.2,1};
            colorSelection[] = {0.102,0,0.4078,1};
            colorText[] = {0,0,0,1};
            font = "PuristaMedium";
            sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

        };
        class Control1682889454
        {
            type = 1;
            idc = -1;
            x = safeZoneX + safeZoneW * 0.53808594;
            y = safeZoneY + safeZoneH * 0.59027778;
            w = safeZoneW * 0.14355469;
            h = safeZoneH * 0.11111112;
            style = 0+2;
            text = "Send";
            borderSize = 0;
            colorBackground[] = {0.6,0,0,1};
            colorBackgroundActive[] = {1,0,0,1};
            colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
            colorBorder[] = {0,0,0,0};
            colorDisabled[] = {0.2,0.2,0.2,1};
            colorFocused[] = {0.2,0.2,0.2,1};
            colorShadow[] = {0,0,0,1};
            colorText[] = {0.6471,0.698,0.2549,1};
            font = "PuristaMedium";
            offsetPressedX = 0.01;
            offsetPressedY = 0.01;
            offsetX = 0.01;
            offsetY = 0.01;
            sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
            soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
            soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
            soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
            soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
            action = "closeDialog 0";
            onButtonClick = [(ctrlText ((findDisplay 666) displayCtrl 111))] execVM "\A3_Clippy\clippy_broadcast.sqf";

        };
        class Control745492904
        {
            type = 0;
            idc = -1;
            x = safeZoneX + safeZoneW * 0.29394532;
            y = safeZoneY + safeZoneH * 0.22569445;
            w = safeZoneW * 0.41210938;
            h = safeZoneH * 0.03819445;
            style = 0+2;
            text = "Clippy Broadcast";
            colorBackground[] = {0,0,0,1};
            colorText[] = {1,1,1,1};
            font = "PuristaMedium";
            sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

        };

    };

};

class RscTitles
{
    class Clippy
    {
        idd = -1;
        duration = 20;
        onLoad = "((_this select 0) displayCtrl 11) ctrlSetText (missionNameSpace getVariable ['CLIPPY_MESSAGE', '']);";

        class controls
        {
            class ClippyImage
            {
                idc = -1;
                type = 0;
                style = 0+48+2048; // picture
                x = safeZoneX + safeZoneW * 0.72363282;
                y = safeZoneY + safeZoneH * 0.51736112;
                w = safeZoneW * 0.26660157;
                h = safeZoneH * 0.47395834;
                font = "EtelkaNarrowMediumPro";
                sizeEx = 0.03;
                colorBackground[] = {0,0,0,1};
                colorText[] = {1,1,1,1};
                text = "\A3_Clippy\clippy-512x512.paa";
            };
            class ClippyText
            {
                type = 0;
                idc = 11;
                x = safeZoneX + safeZoneW * 0.77734375;
                y = safeZoneY + safeZoneH * 0.67881945;
                w = safeZoneW * 0.15820313;
                h = safeZoneH * 0.13715278;
                style = 0+2+16+512;
                text = "";
                colorBackground[] = {0.5059,0.1412,0.7725,0};
                colorText[] = {0,0,0,1};
                font = "PuristaMedium";
                sizeEx = 0.02 * SafeZoneH;
                lineSpacing = 1.2;
            };
        };
    };
};
