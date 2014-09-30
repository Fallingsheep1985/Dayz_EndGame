disableSerialization;
if (isNil "DayZ_UseSteamID") then {
	DayZ_UseSteamID = true;
};

//-----------------------------------Currency & Banking Configs ---------------------------------//
CurrencyName = "Zupa Coins"; // name of your currency
DZE_ATM = ["Laptop_EP1"]; // items,objects classnames where u can bank.
LimitOnBank = false; // false = no limits, true = banks are limited on the value below
MaxBankMoney = 500000; // limit on bank for normal players
DonatorListZupa = ["76561198012464696","111111111"]; // bigger bank PUID
MaxDonatorBankMoney = 1000000; // Bank size donators

//-----------------------------------Currency & Banking Configs END ---------------------------------//
SmeltingGoldBarsToCoinsRate = 1000; // How many gold coins are in a gold bar