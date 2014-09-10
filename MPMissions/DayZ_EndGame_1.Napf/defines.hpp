///////////////////////////////////////////////////////////////////////////
/// Styles
///////////////////////////////////////////////////////////////////////////

// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102

// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C

#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0

#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800

#define ST_TITLE          ST_TITLE_BAR + ST_CENTER

// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400

#define SL_TEXTURES       0x10

// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0

// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20

// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2

// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4


///////////////////////////////////////////////////////////////////////////
/// Base Classes
///////////////////////////////////////////////////////////////////////////
class RscText
{
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0.8784,0.8471,0.651,1};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 2;
	font = "Zeppelin32";
	SizeEx = 0.03921;
};
	class RscTextT
	{
		access = 0;
		type = 0;
		idc = -1;
		colorBackground[] = {0,0,0,0};
		colorText[] = {0.8784,0.8471,0.651,1};
		text = "";
		fixedWidth = 0;
		x = 0;
		y = 0;
		h = 0.037;
		w = 0.3;
		style = 0;
		shadow = 2;
		font = "Zeppelin32";
		SizeEx = 0.03921;
	};
class RscProgress
{
	x = 0.344;
	y = 0.619;
	w = 0.313726;
	h = 0.0261438;
	texture = "\ca\ui\data\loadscreen_progressbar_ca.paa";
	colorFrame[] = {0,0,0,0};
	colorBar[] = {1,1,1,1};
};
class RscProgressNotFreeze
{
	idc = -1;
	type = 45;
	style = 0;
	x = 0.022059;
	y = 0.911772;
	w = 0.029412;
	h = 0.039216;
	texture = "#(argb,8,8,3)color(0,0,0,0)";
};
class RscLoadingText : RscText
{
	style = 2;
	x = 0.323532;
	y = 0.666672;
	w = 0.352944;
	h = 0.039216;
	sizeEx = 0.03921;
	colorText[] = {0.543,0.5742,0.4102,1.0};
};
class RscStructuredText
{
	access = 0;
	type = 13;
	idc = -1;
	style = 0;
	colorText[] = {0.8784,0.8471,0.651,1};
	class Attributes
	{
		font = "Zeppelin32";
		color = "#e0d8a6";
		align = "center";
		shadow = 1;
	};
	x = 0;
	y = 0;
	h = 0.035;
	w = 0.1;
	text = "";
	size = 0.03921;
	shadow = 2;
};
class RscPicture
{
	access = 0;
	type = 0;
	idc = -1;
	style = 48;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class RscEdit
{
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] = {0,0,0,1};
	colorText[] = {0.95,0.95,0.95,1};
	colorSelection[] = {0.8784,0.8471,0.651,1};
	autocomplete = "";
	text = "";
	size = 0.2;
	style = "0x00 + 0x40";
	font = "Zeppelin32";
	shadow = 2;
	sizeEx = 0.03921;
};
class RscCombo
{
	access = 0;
	type = 4;
	style = 0;
	colorSelect[] = {0.023529,0,0.0313725,1};
	colorText[] = {0.023529,0,0.0313725,1};
	colorBackground[] = {0.95,0.95,0.95,1};
	colorScrollbar[] = {0.023529,0,0.0313725,1};
	soundSelect[] = {"",0.1,1};
	soundExpand[] = {"",0.1,1};
	soundCollapse[] = {"",0.1,1};
	maxHistoryDelay = 1;
	class ScrollBar
	{
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		shadow = 0;
		thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
		arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
		arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
		border = "\ca\ui\data\ui_border_scroll_ca.paa";
	};
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	shadow = 0;
	colorSelectBackground[] = {0.8784,0.8471,0.651,1};
	arrowEmpty = "\ca\ui\data\ui_arrow_combo_ca.paa";
	arrowFull = "\ca\ui\data\ui_arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
	color[] = {0,0,0,0.6};
	colorActive[] = {0,0,0,1};
	colorDisabled[] = {0,0,0,0.3};
	font = "Zeppelin32";
	sizeEx = 0.03921;
};
class RscListBox
{
	access = 0;
	type = 5;
	w = 0.4;
	h = 0.4;
	rowHeight = 0;
	colorText[] = {0.8784,0.8471,0.651,1};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorSelect2[] = {0.95,0.95,0.95,1};
	colorSelectBackground[] = {0,0,0,1};
	colorSelectBackground2[] = {0.8784,0.8471,0.651,1};
	colorBackground[] = {0,0,0,1};
	soundSelect[] = {"",0.1,1};
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)";
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)";
	class ScrollBar
	{
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		shadow = 0;
		thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa";
		arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa";
		arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa";
		border = "\ca\ui\data\ui_border_scroll_ca.paa";
	};
	style = 16;
	font = "Zeppelin32";
	shadow = 2;
	sizeEx = 0.03921;
	color[] = {1,1,1,1};
	period = 1.2;
	maxHistoryDelay = 1;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
};
class RscButton
{
	access = 0;
	type = 1;
	text = "";
	colorText[] = {0.8784,0.8471,0.651,1};
	colorDisabled[] = {0.4,0.4,0.4,1};
	colorBackground[] = {1,0.537,0,0.5};
	colorBackgroundDisabled[] = {0.95,0.95,0.95,1};
	colorBackgroundActive[] = {1,0.537,0,1};
	colorFocused[] = {1,0.537,0,1};
	colorShadow[] = {0.023529,0,0.0313725,1};
	colorBorder[] = {0.023529,0,0.0313725,1};
	soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0,0};
	soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "Zeppelin32";
	sizeEx = 0.03921;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};
class RscShortcutButton
{
	type = 16;
	x = 0.1;
	y = 0.1;
	class HitZone
	{
		left = 0.004;
		top = 0.029;
		right = 0.004;
		bottom = 0.029;
	};
	class ShortcutPos
	{
		left = 0.0145;
		top = 0.026;
		w = 0.0392157;
		h = 0.0522876;
	};
	class TextPos
	{
		left = 0.05;
		top = 0.034;
		right = 0.005;
		bottom = 0.005;
	};
	shortcuts[] = {};
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)";
	color[] = {0.8784,0.8471,0.651,1};
	color2[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {1,1,1,1};
	colorBackground2[] = {1,1,1,0.4};
	class Attributes
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
		shadow = "true";
	};
	idc = -1;
	style = 0;
	default = 0;
	shadow = 2;
	w = 0.183825;
	h = 0.104575;
	periodFocus = 1.2;
	periodOver = 0.8;
	animTextureNormal = "\ca\ui\data\ui_button_normal_ca.paa";
	animTextureDisabled = "\ca\ui\data\ui_button_disabled_ca.paa";
	animTextureOver = "\ca\ui\data\ui_button_over_ca.paa";
	animTextureFocused = "\ca\ui\data\ui_button_focus_ca.paa";
	animTexturePressed = "\ca\ui\data\ui_button_down_ca.paa";
	animTextureDefault = "\ca\ui\data\ui_button_default_ca.paa";
	period = 0.4;
	font = "Zeppelin32";
	size = 0.03921;
	sizeEx = 0.03921;
	text = "";
	soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0,0};
	soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
	action = "";
	class AttributesImage
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
	};
};
class RscShortcutButtonMain
{
	idc = -1;
	style = 0;
	default = 0;
	w = 0.313726;
	h = 0.104575;
	color[] = {0.8784,0.8471,0.651,1};
	colorDisabled[] = {1,1,1,0.25};
	class HitZone
	{
		left = 0;
		top = 0;
		right = 0;
		bottom = 0;
	};
	class ShortcutPos
	{
		left = 0.0204;
		top = 0.026;
		w = 0.0392157;
		h = 0.0522876;
	};
	class TextPos
	{
		left = 0.08;
		top = 0.034;
		right = 0.005;
		bottom = 0.005;
	};
	animTextureNormal = "\ca\ui\data\ui_button_main_normal_ca.paa";
	animTextureDisabled = "\ca\ui\data\ui_button_main_disabled_ca.paa";
	animTextureOver = "\ca\ui\data\ui_button_main_over_ca.paa";
	animTextureFocused = "\ca\ui\data\ui_button_main_focus_ca.paa";
	animTexturePressed = "\ca\ui\data\ui_button_main_down_ca.paa";
	animTextureDefault = "\ca\ui\data\ui_button_main_normal_ca.paa";
	period = 0.5;
	font = "Zeppelin32";
	size = 0.03921;
	sizeEx = 0.03921;
	text = "";
	soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1};
	soundPush[] = {"\ca\ui\data\sound\new1",0,0};
	soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1};
	soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1};
	action = "";
	class Attributes
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "left";
		shadow = "false";
	};
	class AttributesImage
	{
		font = "Zeppelin32";
		color = "#E5E5E5";
		align = "false";
	};
};
class RscFrame
{
	type = 0;
	idc = -1;
	style = 64;
	shadow = 2;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,1};
	font = "Zeppelin32";
	sizeEx = 0.02;
	text = "";
};
class RscSlider
{
	access = 0;
	type = 3;
	style = 1024;
	w = 0.3;
	color[] = {1,1,1,0.8};
	colorActive[] = {1,1,1,1};
	shadow = 0;
	h = 0.025;
};

class BOX
{ 
    type = CT_STATIC;
    idc = -1;
    style = ST_CENTER;
    shadow = 2;
    colorText[] = {1,1,1,1};
    font = "Bitstream";
    sizeEx = 0.02;
    colorBackground[] = { 0.33,0.33,0, 0.8 }; 
    text = ""; 

};
class RscBackground
{
	type = 0;
	style = ST_BACKGROUND;
	shadow = 2;
	colorBackground[] = {0,0,0,1};
	colorText[] = {1,1,1,1};
	font = "Zeppelin32";
	sizeEx = 0.02;
	text = "";
};
class RscCharacterSelectText
{
	type = 0;
	style = 0;
	idc = -1;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	text = "Character";
	fixedWidth = 0;
	x = 0;
	y = 0.25 * safezoneH + safezoneY;
	w = 0.2 * safezoneW;
	h = 0.033 * safezoneH;
	shadow = 1;
	colorShadow[] = 
	{
		0,
		0,
		0,
		0.5
	};
	font = "Zeppelin32";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2)";
	linespacing = 1;
};

class RscCharacterSelectPicture
{
	type = 0;
	style = 48;
	idc = -1;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		0.4
	};
	font = "TahomaB";
	sizeEx = 0;
	lineSpacing = 0;
	text = "z\addons\dayz_code\gui\gender_menu_man.paa";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0.25 * safezoneH + safezoneY;
	w = 0.117188 * safezoneW;
	h = 0.542373 * safezoneH;
};

class RscCharacterSelectStructuredText
{
	type = 13;
	style = 0;
	idc = -1;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	class Attributes
	{
		font = "Zeppelin32";
		color = "#ffffff";
		align = "left";
		shadow = 1;
	};
	x = 0;
	y = 0.32 * safezoneH + safezoneY;
	w = 0.15 * safezoneW;
	h = 0.4 * safezoneH;
	text = "";
	font = "Zeppelin32";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
	shadow = 1;
};

class RscCharacterSelectButton
{
	type = 1;
	style = 2;
	idc = -1;
	text = "Spawn";
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] = 
	{
		0.4,
		0.4,
		0.4,
		1
	};
	colorBackground[] = 
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
		0.7
	};
	colorBackgroundDisabled[] = 
	{
		1,
		0,
		0,
		0.5
	};
	colorBackgroundActive[] = 
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
		1
	};
	colorFocused[] = 
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
		1
	};
	colorShadow[] = 
	{
		0,
		0,
		0,
		1
	};
	colorBorder[] = 
	{
		0,
		0,
		0,
		1
	};
	soundEnter[] = 
	{
		"",
		0.09,
		1
	};
	soundPush[] = 
	{
		"",
		0.09,
		1
	};
	soundClick[] = 
	{
		"",
		0.09,
		1
	};
	soundEscape[] = 
	{
		"",
		0.09,
		1
	};
	x = 0;
	y = 0.7 * safezoneH + safezoneY;
	w = 0.08 * safezoneW;
	h = 0.033 * safezoneH;
	shadow = 2;
	font = "Zeppelin32";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	borderSize = 0;
};

class RscCharacterSelectInfoText: RscText
{
	style = 2;
	text = "";
	x = 0.0 * safezoneW + safezoneX;
	y = 0.8 * safezoneH + safezoneY;
	w = 1.0 * safezoneW;
	h = 0.05 * safezoneH;
	colorBackground[] = { -1, -1, -1, 0 };
	colorText[] = { 0.5, 0.5, 0.5, 1 };
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.0)";
};

class RscDisplayCharacterSelect
{
	idd = -1;
	enableDisplay = 1;
	
	onLoad = "uiNamespace setVariable ['CharacterSelectDisplay', _this select 0]; diag_log 'CharacterSelectDisplay.onLoad';";

	class Controls {
		class CharacterSelectTitle: RscText
		{
			idc = 501;
			style = 2;
			text = "Select your Character";
			x = 0.0 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 1.0 * safezoneW;
			h = 0.05 * safezoneH;
			colorBackground[] = { -1, -1, -1, 0 };
			SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
		};
		class CharacterTitle1: RscCharacterSelectText
		{
			idc = 1001;
			text = "Character 1";
			x = 0.258281 * safezoneW + safezoneX;
		};
		class CharacterTitle2: RscCharacterSelectText
		{
			idc = 1002;
			text = "Character 2";
			x = 0.412969 * safezoneW + safezoneX;
		};
		class CharacterTitle3: RscCharacterSelectText
		{
			idc = 1003;
			text = "Character 3";
			x = 0.567656 * safezoneW + safezoneX;
		};
		class CharacterPicture1 : RscCharacterSelectPicture
		{
			idc = 1201;
			x = 0.278281 * safezoneW + safezoneX;
		};
		class CharacterPicture2: RscCharacterSelectPicture
		{
			idc = 1202;
			x = 0.432969 * safezoneW + safezoneX;
		};
		class CharacterPicture3 : RscCharacterSelectPicture
		{
			idc = 1203;
			x = 0.587656 * safezoneW + safezoneX;
		};
		class CharacterText1: RscCharacterSelectStructuredText
		{
			idc = 1101;
			x = 0.248281 * safezoneW + safezoneX;
		};
		class CharacterText2: RscCharacterSelectStructuredText
		{
			idc = 1102;
			x = 0.402969 * safezoneW + safezoneX;
		};
		class CharacterText3: RscCharacterSelectStructuredText
		{
			idc = 1103;
			x = 0.557656 * safezoneW + safezoneX;
		};
		class CharacterButton1: RscCharacterSelectButton
		{
			idc = 1601;
			x = 0.28375 * safezoneW + safezoneX;
			action = "dayz_characterSlot = 1; closeDialog 0;";
		};
		class CharacterButton2: RscCharacterSelectButton
		{
			idc = 1602;
			x = 0.443594 * safezoneW + safezoneX;
			action = "dayz_characterSlot = 2; closeDialog 0;";
		};
		class CharacterButton3: RscCharacterSelectButton
		{
			idc = 1603;
			x = 0.598281 * safezoneW + safezoneX;
			action = "dayz_characterSlot = 3; closeDialog 0;";
		};
		class CharacterDisconnectButton: RscCharacterSelectButton
		{
			text = "Disconnect";
			x = 0.1 * safezoneW + safezoneX;
			y = 0.85 * safezoneH + safezoneY;
			action = "dayz_characterSlot = -2; closeDialog 0;";
		};
		class CharacterRefreshButton: RscCharacterSelectButton
		{
			text = "Refresh";
			x = 0.8 * safezoneW + safezoneX;
			y = 0.85 * safezoneH + safezoneY;
			action = "dayz_characterSlot = -1; closeDialog 0;";
		};
		class CharacterSelectInfo1: RscCharacterSelectInfoText
		{
			idc = 502;
			y = 0.8 * safezoneH + safezoneY;
		};
		class CharacterSelectInfo2: RscCharacterSelectInfoText
		{
			idc = 503;
			y = 0.84 * safezoneH + safezoneY;
		};
	};
};
