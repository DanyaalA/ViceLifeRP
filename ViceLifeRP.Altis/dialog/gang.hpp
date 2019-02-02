class Life_My_Gang_Diag {
    idd = 2620;
    name= "life_my_gang_menu";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "";

    class controlsBackground {
        class Life_RscTitleBackground: Life_RscText {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            idc = -1;
            x = 0.1;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
        };

        class MainBackground: Life_RscText {
            colorBackground[] = {0, 0, 0, 0.7};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.6;
            h = 0.6 - (22 / 250);
        };
    };

    class controls {
        class Title: Life_RscTitle {
            colorBackground[] = {0, 0, 0, 0};
            idc = 2629;
            text = "";
            x = 0.1;
            y = 0.2;
            w = 0.6;
            h = (1 / 25);
        };

        class GangMemberList: Life_RscListBox
        {
            idc = 2621;
            text = "";
            sizeEx = 0.035;
            x = 0.11;
            y = 0.26;
            w = 0.350;
            h = 0.370;
        };

        class CloseLoadMenu: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu";
            x = -0.06 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };

        class GangLeave: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Gang_Leave";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_gangLeave";
            x = 0.47;
            y = 0.26;
            w = (9 / 40);
            h = (1 / 25);
        };

        class GangLock: Life_RscButtonMenu {
            idc = 2622;
            text = "$STR_Gang_UpgradeSlots";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] spawn life_fnc_gangUpgrade";
            x = 0.47;
            y = 0.31;
            w = (9 / 40);
            h = (1 / 25);
        };

        class GangKick: Life_RscButtonMenu {
            idc = 2624;
            text = "$STR_Gang_Kick";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] call life_fnc_gangKick";
            x = 0.47;
            y = 0.36;
            w = (9 / 40);
            h = (1 / 25);
        };

        class GangLeader: Life_RscButtonMenu {
            idc = 2625;
            text = "$STR_Gang_SetLeader";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] spawn life_fnc_gangNewLeader";
            x = 0.47;
            y = 0.41;
            w = (9 / 40);
            h = (1 / 25);
        };

        class InviteMember: GangLeader {
            idc = 2630;
            text = "$STR_Gang_Invite_Player";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] spawn life_fnc_gangInvitePlayer";
            y = .51;
        };

        class DisbandGang: InviteMember    {
            idc = 2631;
            text = "$STR_Gang_Disband_Gang";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
            onButtonClick = "[] spawn life_fnc_gangDisband";
            y = .46;
        };

        class ColorList: Life_RscCombo {
            idc = 2632;
            x = 0.47;
            y = 0.56;
            w = (9 / 40);
            h = 0.03;
        };

        class GangBank: Title {
            idc = 601;
            style = 1;
            text = "";
        };
    };
};

class Life_Create_Gang_Diag {
    idd = 2520;
    name= "life_my_gang_menu_create";
    movingEnable = 0;
    enableSimulation = 1;
    //onLoad = "[] spawn {waitUntil {!isNull (findDisplay 2520)};";
    onLoad = "[] spawn {waitUntil {!isNull (findDisplay 2520)}; ((findDisplay 2520) displayCtrl 2523) ctrlSetText format [localize ""STR_Gang_PriceTxt"",[(getNumber(missionConfigFile >> 'Life_Settings' >> 'gang_price'))] call life_fnc_numberText]};";
    class controlsBackground {
        class picTablet: Life_RscPicture
        {
        	idc = 1200;
        	text = "tablet.paa";
        	x = 0.293698 * safezoneW + safezoneX;
        	y = 0.225 * safezoneH + safezoneY;
        	w = 0.412603 * safezoneW;
        	h = 0.539 * safezoneH;
        };
        class Backgroundtxt: Life_RscStructuredText
        {
            idc = 1101;
            x = 0.345274 * safezoneW + safezoneX;
            y = 0.379 * safezoneH + safezoneY;
            w = 0.299137 * safezoneW;
            h = 0.242 * safezoneH;
          colorBackground[] = {0.145,0.145,0.145,1};
      };
    };

    class controls {

        class Title: PMenu_RscStructuredText
        {
        	idc = 1100;
        	text = "Gang Management"; //--- ToDo: Localize;
        	x = 0.345 * safezoneW + safezoneX;
        	y = 0.35555556 * safezoneH + safezoneY;
        	w = 0.299375 * safezoneW;
        	h = 0.02444445 * safezoneH;
        	colorBackground[] = {-1,-1,-1,1};
        	sizeEx = 1.5;
        };

        class CreateGangText: Life_RscEdit
        {
        	idc = 2522;
        	text = "$STR_Gang_YGN";
        	x = 0.365904 * safezoneW + safezoneX;
        	y = 0.467 * safezoneH + safezoneY;
        	w = 0.247562 * safezoneW;
        	h = 0.033 * safezoneH;
        };
        class InfoMsg: PMenu_RscStructuredText
        {
        	idc = 2523;
        	text = "Enter your gang name below"; //--- ToDo: Localize;
        	x = 0.36625 * safezoneW + safezoneX;
        	y = 0.42444445 * safezoneH + safezoneY;
        	w = 0.2375 * safezoneW;
        	h = 0.02111112 * safezoneH;
        	colorBackground[] = {0.145,0.145,0.145,1};
        };
        class GangCreateField: PMenu_RscButtonMenu
        {
        	idc = -1;
        	text = "Create"; //--- ToDo: Localize;
        	onButtonClick = "[] call life_fnc_createGang";
        	x = 0.406875 * safezoneW + safezoneX;
        	y = 0.52222223 * safezoneH + safezoneY;
        	w = 0.165 * safezoneW;
        	h = 0.02333334 * safezoneH;
        	colorBackground[] = {-1,-1,-1,1};
        	class Attributes {
                font = "RobotoCondensed";
                color = "#ffffff";
                align = "Center";
                valign = "bottom";
                shadow = 1;
            };
        };
    };
};