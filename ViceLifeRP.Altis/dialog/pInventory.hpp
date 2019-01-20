
#include "player_sys.sqf"

class Life_Inventory {
    idd = Inventory_DIALOG;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class PicTablet: Life_RscPicture {
            idc = 1200;
            text = "tablet.paa";
            x = 0.293698 * safezoneW + safezoneX;
            y = 0.225 * safezoneH + safezoneY;
            w = 0.412603 * safezoneW;
            h = 0.55 * safezoneH;
        };
		class moneyStatusInfo: PMenu_RscStructuredText {
            idc = 2015;
            sizeEx = 0.020;
            text = "";
            x = 0.341875 * safezoneW + safezoneX;
            y = 0.37333334 * safezoneH + safezoneY;
            w = 0.07625 * safezoneW;
            h = 0.11333334 * safezoneH;
        };
    };

    class controls {

        class itemList: Life_RscListbox
        {
            sizeEx = 0.030;
        	idc = item_list;
        	x = 0.56189 * safezoneW + safezoneX;
        	y = 0.357 * safezoneH + safezoneY;
        	w = 0.103151 * safezoneW;
        	h = 0.176 * safezoneH;
        	colorText[] = {1,1,1,1};
        	colorBackground[] = {0,0,0,1};
        	colorActive[] = {-1,-1,-1,1};
        };
        class txtItems: Life_RscText
        {
        	idc = 1000;
        	text = "$STR_PM_cItems";
        	x = 0.56189 * safezoneW + safezoneX;
        	y = 0.335 * safezoneH + safezoneY;
        	w = 0.067048 * safezoneW;
        	h = 0.022 * safezoneH;
        	colorBackground[] = {0,0,0,1};
        };
        class UseButton: Life_RscButtonMenu
        {
        	idc = 2400;
        	text = "$STR_Global_Use";
        	onButtonClick = "[] call life_fnc_useItem;";
        	x = 0.56189 * safezoneW + safezoneX;
        	y = 0.577 * safezoneH + safezoneY;
        	w = 0.0515754 * safezoneW;
        	h = 0.022 * safezoneH;
        	colorBackground[] = {-1,-1,-1,1};
        };
        class iNearPlayers: Life_RscCombo
        {
        	idc = 2023;
        	x = 0.56189 * safezoneW + safezoneX;
        	y = 0.544 * safezoneH + safezoneY;
        	w = 0.108308 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class Title: Life_RscTitle
        {
        	idc = carry_weight;
        	text = "";
        	x = 0.615 * safezoneW + safezoneX;
        	y = 0.33555556 * safezoneH + safezoneY;
        	w = 0.05 * safezoneW;
        	h = 0.02222223 * safezoneH;
        	colorBackground[] = {0,0,0,1};
        };
        class txtBanking: Life_RscText
        {
        	idc = 1002;
        	text = "Banking";
        	x = 0.329801 * safezoneW + safezoneX;
        	y = 0.335 * safezoneH + safezoneY;
        	w = 0.0979933 * safezoneW;
        	h = 0.022 * safezoneH;
        	colorBackground[] = {0,0,0,1};
        };

        class GiveMoneyButton: Life_RscButtonMenu
        {
        	idc = 2001;
        	text = "$STR_Global_Give";
        	onButtonClick = "[] call life_fnc_giveMoney";
        	x = 0.329801 * safezoneW + safezoneX;
        	y = 0.588 * safezoneH + safezoneY;
        	w = 0.0979933 * safezoneW;
        	h = 0.022 * safezoneH;
        	colorBackground[] = {-1,-1,-1,1};
        };
        class NearPlayers: Life_RscCombo //For Money
        {
        	idc = 2022;
        	text = "PlayerNearComboMoney";
        	x = 0.329801 * safezoneW + safezoneX;
        	y = 0.555 * safezoneH + safezoneY;
        	w = 0.0979933 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class WireMoneyButton: Life_RscButtonMenu
        {
        	idc = 3005;
        	text = "Wire Money";
        	//onButtonClick = "['Error','Not Implented Yet'] call UPM_fnc_showNotification";
        	x = 0.329801 * safezoneW + safezoneX;
        	y = 0.621 * safezoneH + safezoneY;
        	w = 0.0979933 * safezoneW;
        	h = 0.022 * safezoneH;
        	colorBackground[] = {-1,-1,-1,1};
        };
        class EditMoney: Life_RscEdit
        {
        	idc = item_edit;
        	text = "1";
            sizeEx = 0.030;
        	x = 0.329801 * safezoneW + safezoneX;
        	y = 0.522 * safezoneH + safezoneY;
        	w = 0.0979933 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class LicenseListBox: Life_RscListbox
        {
        	idc = 1501;
        	x = 0.438109 * safezoneW + safezoneX;
        	y = 0.357 * safezoneH + safezoneY;
        	w = 0.108308 * safezoneW;
        	h = 0.286 * safezoneH;
        	colorText[] = {-1,-1,-1,1};
        	colorBackground[] = {-1,-1,-1,1};
        	colorActive[] = {-1,-1,-1,1};
        };
        class txtLicense: Life_RscText
        {
        	idc = 1003;
        	text = "Licenses";
        	x = 0.43811 * safezoneW + safezoneX;
        	y = 0.335 * safezoneH + safezoneY;
        	w = 0.108308 * safezoneW;
        	h = 0.022 * safezoneH;
        	colorBackground[] = {0,0,0,1};
        };
        class GiveButton: Life_RscButtonMenu
        {
        	idc = 2403;
        	text = "$STR_Global_Give";
        	onButtonClick = "[] call life_fnc_giveItem;";
        	x = 0.56189 * safezoneW + safezoneX;
        	y = 0.61 * safezoneH + safezoneY;
        	w = 0.0515754 * safezoneW;
        	h = 0.022 * safezoneH;
        	colorBackground[] = {-1,-1,-1,1};
        };
        class DropButton: Life_RscButtonMenu
        {
        	idc = 2404;
        	text = "$STR_Global_Use";
        	onButtonClick = "[] call life_fnc_useItem;";
        	x = 0.618623 * safezoneW + safezoneX;
        	y = 0.61 * safezoneH + safezoneY;
        	w = 0.0515754 * safezoneW;
        	h = 0.022 * safezoneH;
        	colorBackground[] = {-1,-1,-1,1};
        };
        class itemEdit: Life_RscEdit
        {
        	idc = item_edit;
        	text = "1";
        	x = 0.618623 * safezoneW + safezoneX;
        	y = 0.577 * safezoneH + safezoneY;
        	w = 0.0515754 * safezoneW;
        	h = 0.022 * safezoneH;
        };

        class moneyStatusInfo: Life_RscStructuredText {
            idc = 2015;
            sizeEx = 0.020;
            text = "";
            x = 0.336875 * safezoneW + safezoneX;
            y = 0.41333334 * safezoneH + safezoneY;
            w = 0.07625 * safezoneW;
            h = 0.07111112 * safezoneH;
        };
    };
};
                                                                                                                                                                                                    