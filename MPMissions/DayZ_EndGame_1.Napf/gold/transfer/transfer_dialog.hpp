class BankTransferDialog
{
	idd = 8101;
	movingenable = 0;
	enableSimulation = true;
	onLoad = "[] execVM 'gold\transfer\transfer_playerlist.sqf'";
	
	class controlsBackground {
		class BankTransferTitleBackground:Life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.35;
			y = 0.2;
			w = 0.45;
			h = (1 / 25);
		};
		
		class BankTransferMainBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.35;
			y = 0.2 + (11 / 250);
			w = 0.45;
			h = 0.62;
		};
	};
	
	class Controls {

		class BankBalanceTitle : Life_RscStructuredText
		{
			idc = 8102;
			text = "Bank balance:";
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.39;
			y = 0.27;
			w = 0.3;
			h = 0.1;
		};
		
		class MyBankBalance : RscTextT
		{
			idc = 8103;
			text = "";
			colorText[] = {1,1,1,1};
			x = 0.39;
			y = 0.28;
			w = 0.6;
			h = 0.1;
		};
		
		class TransferPlayerList: RscListBox {
			idc = 8104;
			default = 1;
			x = 0.39; y = 0.46;
			w = 0.36; h = 0.23;
			colorSelect[] = {0, 0, 0, 0.9};
			colorSelect2[] = {0, 0, 0, 0.9};
			colorSelectBackground[] = {1, 1, 1, 0.3};
			colorSelectBackground2[] = {1, 1, 1, 0.9};
			onLBSelChanged = "";
			onLBDblClick = "";
			rowHeight = 0.025;
			soundSelect[] = {"\ca\ui\data\sound\mouse2", 0.09, 1};
			maxHistoryDelay = 10;
			canDrag = 0;
			xcolumn1 = "0.1f";
			xcolumn2 = "0.25f";
			xcolumn3 = "0.85f";		
		};
		
		class PickPlayerTitle : Life_RscStructuredText
		{
			idc = 8105;
			text = "Pick a player:";
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.39;
			y = 0.41;
			w = 0.4;
			h = 0.1;
		};
		
		class TransferAmount : Life_RscEdit {
		
		idc = 8106;
		colorText[] = {0.8784,0.8471,0.651,1};
		text = "";
		sizeEx = 0.040;
		x = 0.4; y = 0.73;
		w = 0.2; h = 0.041;
		
		};
		
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Money Transfer";
			colorText[] = {1,1,1,1};
			x = 0.35;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};
		
		class TransferButton : life_RscButtonMenu 
		{
			idc = -1;
			text = "Transfer";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "execVM 'gold\transfer\transfer_confirm.sqf';";
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.4;
			y = 0.78;
			w = (6 / 40);
			h = (1 / 25);
		};
		
		class CloseButton : Life_RscButtonMenu {
			idc = -1;
			text = "Close";
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
			x = 0.35;
			y = 0.87;
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};


class BankTransitionConfirm
{
	idd = 8201;
	movingenable = 0;
	enableSimulation = true;
	
	class controlsBackground {
		class ConfirmTitleBackground:Life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.35;
			y = 0.2;
			w = 0.45;
			h = (1 / 25);
		};
		
		class ConfirmMainBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.35;
			y = 0.2 + (11 / 250);
			w = 0.45;
			h = 0.25;
		};
	};
	
	class Controls {

		class AreYouSureTitle : Life_RscStructuredText
		{
			idc = 8202;
			text = "Are you sure you want to";
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.39;
			y = 0.27;
			w = 0.6;
			h = 0.1;
		};
		
		class ConfirmAmountText : RscTextT
		{
			idc = 8203;
			text = "";
			colorText[] = {1,1,1,1};
			x = 0.39;
			y = 0.28;
			w = 0.6;
			h = 0.1;
		};
		class ConfirmTargetText : RscTextT
		{
			idc = 8204;
			text = "";
			colorText[] = {1,1,1,1};
			x = 0.39;
			y = 0.32;
			w = 0.6;
			h = 0.1;
		};
	
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = -1;
			text = "Confirm Bank Transition";
			colorText[] = {1,1,1,1};
			x = 0.35;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};
		
		class ConfirmButton : life_RscButtonMenu 
		{
			idc = -1;
			text = "Confirm";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "[] spawn FinishBankTransition; ((ctrlParent (_this select 0)) closeDisplay 9000);";
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.4;
			y = 0.42;
			w = (6 / 40);
			h = (1 / 25);
		};
		
		class CancelButton : life_RscButtonMenu 
		{
			idc = -1;
			text = "Cancel";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
			colorText[] = {0.8784,0.8471,0.651,1};
			x = 0.57;
			y = 0.42;
			w = (6 / 40);
			h = (1 / 25);
		};

		class CloseButton : Life_RscButtonMenu {
			idc = -1;
			text = "Close";
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
			x = 0.35;
			y = 0.501;
			w = (6.25 / 40);
			h = (1 / 25);
		};
	};
};