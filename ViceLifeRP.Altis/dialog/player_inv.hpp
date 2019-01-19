#include "player_sys.sqf"

class playerSettings {
    idd = playersys_DIALOG;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
		class moneyStatusInfo: Life_RscStructuredText {
            idc = 2015;
            sizeEx = 0.020;
            text = "";
			x = 0.391692 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.206302 * safezoneW;
			h = 0.033 * safezoneH;
        };    
    };

    class controls {
		class PicTablet: Life_RscPicture
		{
			idc = 1201;
			text = "textures\tablet.paa";
			x = 0.293698 * safezoneW + safezoneX;
			y = 0.225 * safezoneH + safezoneY;
			w = 0.412603 * safezoneW;
			h = 0.55 * safezoneH;
		};
		class ButtonInventory: Life_RscButtonMenu
		{
			idc = 2400;
			onButtonClick = "createDialog ""Life_Inventory"";";
			x = 0.334959 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {0.4,0.4,0.4,1};
		};
		class PicInventory: Life_RscPicture
		{
			idc = 1202;
			text = "textures\Icons\Inventory.paa";
			x = 0.345274 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class txtInventory: PMenu_RscStructuredText
		{
			idc = 1100;
			text = "$STR_PM_Inventory"; //--- ToDo: Localize;
			x = 0.340117 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class ButtonMarket: Life_RscButtonMenu
		{
			idc = 2401;
			x = 0.334959 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {1,1,1,1};
		};
		class ButtonSync: Life_RscButtonMenu
		{
		    onButtonClick = "[] call SOCK_fnc_syncData;";
			idc = 2402;
			x = 0.334959 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {1,1,1,1};
		};
		class ButtonPerks: Life_RscButtonMenu
		{
			idc = 2403;
			x = 0.402007 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {0.4,0.4,0.4,1};
		};
		class ButtonGang: Life_RscButtonMenu
		{
			idc = 2405;
			x = 0.536103 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {0.4,0.4,0.4,1};
		};
		class ButtonMobile: Life_RscButtonMenu
		{
			idc = 2406;
			x = 0.603151 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {0.4,0.4,0.4,1};
		};
		class ButtonProfession: Life_RscButtonMenu
		{
			idc = 2407;
			x = 0.402007 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {0.4,0.4,0.4,1};
		};
		class ButtonTBA23: Life_RscButtonMenu
		{
			idc = 2408;
			x = 0.469055 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {0.4,0.4,0.4,1};
		};
		class ButtonTBA24: Life_RscButtonMenu
		{
			idc = 2409;
			x = 0.536103 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {0.4,0.4,0.4,1};
		};
		class ButtonSettings: Life_RscButtonMenu
		{
			idc = 2410;
			x = 0.603151 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {0.4,0.4,0.4,1};
		};
		class ButtonTBA35: Life_RscButtonMenu
		{
			idc = 2411;
			x = 0.603151 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {0.4,0.4,0.4,1};
		};
		class ButtonKeyChain: Life_RscButtonMenu
		{
			idc = 2404;
			x = 0.469055 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			onButtonClick = "createDialog ""Life_key_management"";";
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {0.4,0.4,0.4,1};
		};
		class ButtonTBA34: Life_RscButtonMenu
		{
			idc = 2412;
			x = 0.536103 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {0.4,0.4,0.4,1};
		};
		class ButtonAdmin: Life_RscButtonMenu
		{
			idc = 2413;
			x = 0.469055 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {0.4,0.4,0.4,1};
		};
		class ButtonPNC: Life_RscButtonMenu
		{
			idc = 2414;
			x = 0.402007 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0618905 * safezoneW;
			h = 0.088 * safezoneH;
			colorBackground[] = {0.2,0.2,0.2,1};
			colorActive[] = {0.4,0.4,0.4,1};
		};
		class PicPerks: Life_RscPicture
		{
			idc = 1200;
			text = "textures\Icons\perks.paa";
			x = 0.412322 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class txtMarket: PMenu_RscStructuredText
		{
			idc = 1101;
			text = "$STR_PM_Market"; //--- ToDo: Localize;
			x = 0.340117 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class txtPerks: PMenu_RscStructuredText
		{
			idc = 1102;
			text = "$STR_PM_Perks"; //--- ToDo: Localize;
			x = 0.407164 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class txtKeyChain: PMenu_RscStructuredText
		{
			idc = 1103;
			text = "$STR_PM_KeyChain"; //--- ToDo: Localize;
			x = 0.474212 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class txtGang: PMenu_RscStructuredText
		{
			idc = 1104;
			text = "$STR_PM_Gang"; //--- ToDo: Localize;
			x = 0.54126 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class txtMobile: PMenu_RscStructuredText
		{
			idc = 1105;
			text = "$STR_PM_Mobile"; //--- ToDo: Localize;
			x = 0.608309 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class txtProfession: PMenu_RscStructuredText
		{
			idc = 1106;
			text = "$STR_PM_Profession"; //--- ToDo: Localize;
			x = 0.407164 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0464179 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class txtTBA23: PMenu_RscStructuredText
		{
			idc = 1107;
			text = "TBA23"; //--- ToDo: Localize;
			x = 0.474212 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class txtTBA24: PMenu_RscStructuredText
		{
			idc = 1108;
			text = "TBA24"; //--- ToDo: Localize;
			x = 0.54126 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class txtSettings: PMenu_RscStructuredText
		{
			idc = 1109;
			text = "$STR_PM_Settings"; //--- ToDo: Localize;
			x = 0.608309 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class txtSync: PMenu_RscStructuredText
		{
			idc = 1110;
			text = "$STR_PM_SyncData"; //--- ToDo: Localize;
			x = 0.340116 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class txtPNC: PMenu_RscStructuredText
		{
			idc = 1111;
			text = "$STR_PM_PNC"; //--- ToDo: Localize;
			x = 0.407164 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class txtAdmin: PMenu_RscStructuredText
		{
			idc = 1112;
			text = "$STR_PM_Admin"; //--- ToDo: Localize;
			x = 0.474212 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class txtTBA34: PMenu_RscStructuredText
		{
			idc = 1113;
			text = "TBA34"; //--- ToDo: Localize;
			x = 0.54126 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class txtTBA35: PMenu_RscStructuredText
		{
			idc = 1114;
			text = "TBA35"; //--- ToDo: Localize;
			x = 0.608308 * safezoneW + safezoneX;
			y = 0.61 * safezoneH + safezoneY;
			w = 0.0515754 * safezoneW;
			h = 0.022 * safezoneH;
			sizeEx = 0.1 * GUI_GRID_H;
		};
		class PicKeyChain: Life_RscPicture
		{
			idc = 1203;
			text = "textures\Icons\keychain.paa";
			x = 0.47937 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PicGang: Life_RscPicture
		{
			idc = 1204;
			text = "textures\Icons\gang.paa";
			x = 0.546418 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PicMobile: Life_RscPicture
		{
			idc = 1205;
			text = "textures\Icons\mobile.paa";
			x = 0.613466 * safezoneW + safezoneX;
			y = 0.346 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PicMarket: Life_RscPicture
		{
			idc = 1206;
			text = "textures\Icons\market.paa";
			x = 0.345274 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PicProfession: Life_RscPicture
		{
			idc = 1207;
			text = "textures\Icons\professions.paa";
			x = 0.412322 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PicTBA23: Life_RscPicture
		{
			text = "textures\Icons\TBA.paa";
			idc = 1208;
			x = 0.47937 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PicTBA24: Life_RscPicture
		{
			text = "textures\Icons\TBA.paa";
			idc = 1209;
			x = 0.546418 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PicSettings: Life_RscPicture
		{
			idc = 1210;
			text = "textures\Icons\settings.paa";
			x = 0.613466 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		/*class RscPicture_1211: Life_RscPicture //dont know what this is
		{
			idc = 1211;
			x = 0.372441 * safezoneW + safezoneX;
			y = 0.578704 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		}; */
		class PicSync: Life_RscPicture
		{
			idc = 1212;
			text = "textures\Icons\sync.paa";
			x = 0.345274 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PicPNC: Life_RscPicture
		{
			idc = 1213;
			text = "textures\Icons\PNC.paa";
			x = 0.412322 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PicAdmin: Life_RscPicture
		{
			idc = 1214;
			text = "textures\Icons\admin.paa";
			x = 0.47937 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PicTBA34: Life_RscPicture
		{
			text = "textures\Icons\TBA.paa";
			idc = 1215;
			x = 0.546418 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class PicTBA35: Life_RscPicture
		{
			text = "textures\Icons\TBA.paa";
			idc = 1216;
			x = 0.613466 * safezoneW + safezoneX;
			y = 0.544 * safezoneH + safezoneY;
			w = 0.0412603 * safezoneW;
			h = 0.066 * safezoneH;
		};
		class moneyStatusInfo: Life_RscStructuredText {
            idc = 2015;
            sizeEx = 0.020;
            text = "";
			x = 0.391692 * safezoneW + safezoneX;
			y = 0.313 * safezoneH + safezoneY;
			w = 0.206302 * safezoneW;
			h = 0.033 * safezoneH;
        }; 
    };
};
