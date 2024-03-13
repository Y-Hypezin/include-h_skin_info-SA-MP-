// - - - - - - - - : datas


// (C) Copyright by Y-Hypezin(R)

// @include      : h_skin_info
// @version      : ( 1 )
// @infoV        : ( 1.36.6.0 ) : discriminator.define(s).function(s).codchange(s) - note: if the information from a new update is repeated in this version, discriminator(version) ++
// @github       : https://github.com/Y-Hypezin
// @date         : 13th march 2024

// @author       : Y-Hypezin
// @contributors : -
// @sent by      : Y-Hypezin
// @codelock     : this code is open for modifications, but it is necessary to have my credits!

// @comments     : -


// - - - - - - - - : include


// custom include-guard to ensure we don't duplicate
#if (!defined _INC_h_skin_info)
	// define the include (indentifier)
	#define _INC_h_skin_info
#else
    // for because it is already defined in another environment
    #endinput 
#endif


// - - - - - - - - : natives


/// functions

/// native IsValidSkinID (skinid)
/// native GetSkinName (skinid);
/// native GetSkinModelName (skinid);
/// native GetSkinSex (skinid);
/// native GetSkinLocal (skinid);
/// native GetSkinLocalName (local);


// - - - - - - - - : defines


#define MAX_SKINS (312) // skin 74 [N/A]
#define MAX_SKIN_MODEL_NAME (8)
#define MAX_SKIN_NAME (32)

////////////

#define MAX_SKIN_LOCALS (30)

#define SKIN_LOCAL_SA (2)
#define _SKIN_LOCAL_SA "San Andreas"

#define SKIN_LOCAL_LS (4)
#define _SKIN_LOCAL_LS "Los Santos"

#define SKIN_LOCAL_SF (8)
#define _SKIN_LOCAL_SF "San Fierro"

#define SKIN_LOCAL_LV (16)
#define _SKIN_LOCAL_LV "Las Venturas"

#define SKIN_LOCAL_GYM (32)
#define _SKIN_LOCAL_GYM "GYM"

#define SKIN_LOCAL_BEACHES (64)
#define _SKIN_LOCAL_BEACHES "Beaches"

#define SKIN_LOCAL_PIZZA_CO_ (128)
#define _SKIN_LOCAL_PIZZA_CO_ "Pizza"

#define SKIN_LOCAL_AIRPORTS (256)
#define _SKIN_LOCAL_AIRPORTS "Airports"

#define SKIN_LOCAL_CASINO (512)
#define _SKIN_LOCAL_CASINO "Casino"

#define SKIN_LOCAL_MADD_DG_MANSION (1024)
#define _SKIN_LOCAL_MADD_DG_MANSION "Madd Dogg Manssion"

#define SKIN_LOCAL_DOHERTY (2048)
#define _SKIN_LOCAL_DOHERTY "Doherty"

#define SKIN_LOCAL_AROUND_SA (4096)
#define _SKIN_LOCAL_AROUND_SA "Around San Andreas"

#define SKIN_LOCAL_MISSION (8192)
#define _SKIN_LOCAL_MISSION "Mission"

#define SKIN_LOCAL_AREA_6 (16384)
#define _SKIN_LOCAL_AREA_6 "Area 6"

#define SKIN_LOCAL_BAR (32768)
#define _SKIN_LOCAL_BAR "Bar"

#define SKIN_LOCAL_NULL (65536)
#define _SKIN_LOCAL_NULL "unknown"

#define SKIN_LOCAL_CLUCKIN_BELL (131072)
#define _SKIN_LOCAL_CLUCKIN_BELL "Cluckin' Bell"

#define SKIN_LOCAL_TATTO_SHOPS (262144)
#define _SKIN_LOCAL_TATTO_SHOPS "Tatto shops"

#define SKIN_LOCAL_BURGER_SHOT (524288)
#define _SKIN_LOCAL_BURGER_SHOT "Buger Shot"

#define SKIN_LOCAL_EL_QUEBRADOS (1048576)
#define _SKIN_LOCAL_EL_QUEBRADOS "El Quebrados"

#define SKIN_LOCAL_BLUEBERRY (2097152)
#define _SKIN_LOCAL_BLUEBERRY "Blueberry"

#define SKIN_LOCAL_CLOTHES_SHOPS (4194304)
#define _SKIN_LOCAL_CLOTHES_SHOPS "Clothes Shops"

#define SKIN_LOCAL_CUTSCENE (8388608)
#define _SKIN_LOCAL_CUTSCENE "Cutscene"

#define SKIN_LOCAL_NOODLE_STANDS (16777216)
#define _SKIN_LOCAL_NOODLE_STANDS "Noodle Stands"

#define SKIN_LOCAL_BOATING_SCHOOL (33554432)
#define _SKIN_LOCAL_BOATING_SCHOOL "Boating School"

#define SKIN_LOCAL_HOTDOG_VANS (67108864)
#define _SKIN_LOCAL_HOTDOG_VANS "Hotdog vans"

#define SKIN_LOCAL_DESERT (134217728)
#define _SKIN_LOCAL_DESERT "Desert"

#define SKIN_LOCAL_COUNTRY (268435456) 
#define _SKIN_LOCAL_COUNTRY "Country"

#define SKIN_LOCAL_FERN_RIDGE (536870912)
#define _SKIN_LOCAL_FERN_RIDGE "Fern Ridge"

#define SKIN_LOCAL_AMMUNATION (1073741824)
#define _SKIN_LOCAL_AMMUNATION "Ammunation"

////////////

#define SKIN_SEX_MALE 0
#define SKIN_SEX_FEMALE 1

////////////

enum __h_SKIN_INFO {
    __h_skin_model_name [MAX_SKIN_MODEL_NAME char],
    __h_skin_name [MAX_SKIN_NAME char],
    __h_skin_data [2]
};

stock const __H_SKIN_INFO_VAR [] [__h_SKIN_INFO] = {
    {!"cj", !"CJ", {SKIN_LOCAL_NULL, SKIN_SEX_MALE}},
    {!"truth", !"Truth", {SKIN_LOCAL_SF | SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"maccer", !"Maccer", {SKIN_LOCAL_LS | SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"andre", !"Andre", {SKIN_LOCAL_NULL, SKIN_SEX_MALE}},
    {!"bbthin", !"Big Bear [Thin]", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"bb", !"Big Bear [Big]", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"emmet", !"Emmet", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"male01", !"Casual JeanJacket", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"janitor", !"Janitor", {SKIN_LOCAL_CASINO, SKIN_SEX_MALE}},
    {!"bfori", !"Business Lady", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"bfost", !"Old Fat Lady", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"vbfycrp", !"Casino croupier", {SKIN_LOCAL_CASINO, SKIN_SEX_FEMALE}},
    {!"bfyri", !"Rich Woman", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"bfyst", !"Street Girl", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"bmori", !"Floral Shirt", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmost", !"Mr.Whittaker", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmyap", !"Earmuff Worker", {SKIN_LOCAL_AIRPORTS, SKIN_SEX_MALE}},
    {!"bmybu", !"Businessman", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmybe", !"Beach Visitor", {SKIN_LOCAL_BEACHES | SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmydj", !"DJ", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmyri", !"Rich Guy", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmycr", !"Striped Gangsta", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmyst", !"Orange Sportsman", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmybmx", !"BMXer", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"wbdyg1", !"LS Coach", {SKIN_LOCAL_MADD_DG_MANSION, SKIN_SEX_MALE}},
    {!"wbdyg2", !"Varsity jacket", {SKIN_LOCAL_MADD_DG_MANSION, SKIN_SEX_MALE}},
    {!"wmybp", !"Backpacker", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmycon", !"Construction Worker", {SKIN_LOCAL_DOHERTY, SKIN_SEX_MALE}},
    {!"bmydrug", !"Black Drug Dealer", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"wmydrug", !"Withe Drug Dealer", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"hmydrug", !"Vagos Drug Dealer", {SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"dwfolc", !"Fat Cowgirl", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"dwmolc1", !"Eyepatch", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"dwmolc2", !"Bounty Hunter", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"dwmylc1", !"Marlboro Man", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"hmogar", !"Gardener", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmygol1", !"Golfer", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmygol2", !"Golfer", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"hfori", !"Old Golf Lady", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"hfost", !"Old Maid", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"hfyri", !"Classy Dark Hooker", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"hfyst", !"Tracksuit Girl", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"jethro", !"Jethro", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"hmori", !"Porn Producer", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"hmost", !"Tatooed Plaid", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"hmybe", !"Beach Visitor", {SKIN_LOCAL_BEACHES | SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"hmyri", !"Dark Romeo", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"hmycr", !"boy glasses", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"hmyst", !"boy glasses 2", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"omokung", !"Snakehead", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmymech", !"Mechanic", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmymoun", !"Mountain Biker Yellow", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmymoun", !"Mountain Biker Red", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"ofori", !"Unknown", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"ofost", !"Hispanic Woman", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"ofyri", !"Rich Bitch", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"ofyst", !"Legwarmers 1", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"omori", !"Oriental Suit", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"omost", !"Oriental shirt Red", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"omyri", !"Oriental striped suit", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"omyst", !"Oriental shirt White", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmyplt", !"Pilot", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmopj", !"Colonel Fuhrberger", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bfypro", !"Prostitute", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"hfypro", !"Prostitute 2", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"kendl", !"Kendl Johnson", {SKIN_LOCAL_LS | SKIN_LOCAL_SF, SKIN_SEX_FEMALE}},
    {!"bmypol1", !"Pool Player", {SKIN_LOCAL_BAR, SKIN_SEX_MALE}},
    {!"bmypol2", !"Pool Player 2", {SKIN_LOCAL_BAR | SKIN_LOCAL_NULL, SKIN_SEX_MALE}},
    {!"wmoprea", !"Priest", {SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"sbfyst", !"Denim Girl", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wmosci", !"Scientist", {SKIN_LOCAL_AREA_6, SKIN_SEX_MALE}},
    {!"wmysgrd", !"Security Guard", {SKIN_LOCAL_AIRPORTS, SKIN_SEX_MALE}},
    {!"swmyhp1", !"Hippy", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"swmyhp2", !"Hippy 2", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"unknown", !"N/A", {SKIN_LOCAL_NULL, -1}},
    {!"swfopro", !"Prostitute 3", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wfystew", !"Stewardess", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"swmotr1", !"Homeless", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wmotr1", !"Homeless 2", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmotr1", !"Homeless 3", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"vbmybox", !"Boxer", {SKIN_LOCAL_SA | SKIN_LOCAL_GYM, SKIN_SEX_MALE}},
    {!"vwmybox", !"Boxer 2", {SKIN_LOCAL_SA | SKIN_LOCAL_GYM, SKIN_SEX_MALE}},
    {!"vhmyelv", !"Black Elvis", {SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"vbmyelv", !"White Elvis", {SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"vimyelv", !"Blue Elvis", {SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"vwfypro", !"Prostitute 4", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"ryder", !"Ryder with robbery mask", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"vwfyst1", !"Stripper", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wfori", !"Casual Old Lady", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wfost", !"Cleaning Lady", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wfyjg", !"Jogger", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wfyri", !"Rich Woman", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wfyro", !"Rollerskater", {SKIN_LOCAL_BEACHES | SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wfyst", !"Hoop Earrings 1", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wmori", !"Andy Capp", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmost", !"Jacker Hippie", {SKIN_LOCAL_SA | SKIN_LOCAL_NULL, SKIN_SEX_MALE}},
    {!"wmyjg", !"Jogger", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmylg", !"Lifeguard", {SKIN_LOCAL_BEACHES, SKIN_SEX_MALE}},
    {!"wmyri", !"Baywatch Dude", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmyro", !"Rollerskater", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmycr", !"Biker", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmyst", !"Jacker Hippie", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"ballas1", !"Balla", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"ballas2", !"Balla 2", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"ballas", !"Balla 3", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"fam1", !"Grove Street Families", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"fam2", !"Grove Street Families 2", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"fam", !"Grove Street Families 3", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"lsv1", !"Los Santos Vagos", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"lsv2", !"Los Santos Vagos 2", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"lsv", !"Los Santos Vagos 3", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"maffa", !"The Russian Mafia", {SKIN_LOCAL_AROUND_SA, SKIN_SEX_MALE}},
    {!"maffb", !"The Russian Mafia 2", {SKIN_LOCAL_AROUND_SA, SKIN_SEX_MALE}},
    {!"mafboss", !"The Russian Mafia 3", {SKIN_LOCAL_AROUND_SA, SKIN_SEX_MALE}},
    {!"vla1", !"Varios Los Aztecas", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"vla2", !"Varios Los Aztecas 2", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"vla", !"Varios Los Aztecas 3", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"triada", !"Triad", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"triadb", !"Triad 2", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"sindaco", !"Johhny Sindacco", {SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"triboss", !"Triad Boss", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"dnb1", !"Da Nang Boy", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"dnb2", !"Da Nang Boy 2", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"dnb", !"Da Nang Boy 3", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"vmaff1", !"The Mafia", {SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"vmaff2", !"The Mafia 2", {SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"vmaff", !"The Mafia 3", {SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"vmaff", !"The Mafia 4", {SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"dnmylc", !"Farm Inhabitant", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"dnfolc1", !"Farm Inhabitant 2", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"dnfolc2", !"Farm Inhabitant 3", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"dnfylc", !"Farm Inhabitant 4", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"dnmolc1", !"Farm Inhabitant 5", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"dnmolc2", !"Farm Inhabitant 6", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"sbmotr2", !"Homeless 4", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"swmotr2", !"Homeless 5", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"sbmytr", !"Old Rasta", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"swmotr", !"Homeless 6", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wfybe", !"Beach Visitor", {SKIN_LOCAL_BEACHES | SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"bfybe", !"Beach Visitor 2", {SKIN_LOCAL_BEACHES | SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"hfybe", !"Beach Visitor 3", {SKIN_LOCAL_BEACHES | SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"sofybu", !"Businesswoman", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"sbmyst", !"Taxi Driver", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"sbmycr", !"Crack Maker", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmycg", !"Crack Maker 2", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wfycrk", !"Crack Maker 3", {SKIN_LOCAL_BEACHES | SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"hmycm", !"Crack Maker 4", {SKIN_LOCAL_BEACHES | SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmybu", !"Businessman 2", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bfybu", !"Businesswoman 2", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"smokev", !"Big Smoke Armored", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"wfybu", !"Businesswoman 3", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"dwfylc1", !"Melanie", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wfypro", !"Prostitute 5", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wmyconb", !"Construction Worker", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmybe", !"Beach Visitor", {SKIN_LOCAL_BEACHES | SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmypizz", !"Pizza Worker", {SKIN_LOCAL_PIZZA_CO_, SKIN_SEX_MALE}},
    {!"bmobar", !"Barber", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"cwfyhb", !"Hillbilly", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"cwmofr", !"Farmer", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"cwmohb1", !"Hillbilly 2", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"cwmohb2", !"Hillbilly 3", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"cwmyfr", !"Farmer 2", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"cwmyhb1", !"Hillbilly 4", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmyboun", !"Black Bouncer", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmyboun", !"White Bouncer", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmomib", !"White MIB agent", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmymib", !"Black MIB agent", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmybell", !"Cluckin' Bell Worker", {SKIN_LOCAL_CLUCKIN_BELL, SKIN_SEX_MALE}},
    {!"bmochil", !"Hotdog", {SKIN_LOCAL_HOTDOG_VANS, SKIN_SEX_MALE}},
    {!"sofyri", !"Asian Escort", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"somyst", !"PubeStache Tshirt", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"vwmybjd", !"Blackjack Dealer", {SKIN_LOCAL_CASINO, SKIN_SEX_MALE}},
    {!"vwfycrp", !"Casino croupier", {SKIN_LOCAL_CASINO, SKIN_SEX_FEMALE}},
    {!"sfr1", !"San Fierro Rifa", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"sfr2", !"San Fierro Rifa", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"sfr", !"San Fierro Rifa", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"bmybar", !"Barber", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmybar", !"Barber", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wfysex", !"Whore", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wmyammo", !"Ammunation Salesman", {SKIN_LOCAL_AMMUNATION, SKIN_SEX_MALE}},
    {!"bmytatt", !"Tattoo Artist", {SKIN_LOCAL_TATTO_SHOPS, SKIN_SEX_MALE}},
    {!"vwmycr", !"Punk", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"vbmocd", !"Cab Driver", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"vbmycr", !"Klingon", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"vhmycr", !"Neckbeard", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"sbmyri", !"Nervous Guy", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"somyri", !"Teacher", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"somybu", !"Businessman 3", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"swmyst", !"Green Shirt", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmyva", !"Valet", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"copgrl", !"Barbara Schternvart", {SKIN_LOCAL_EL_QUEBRADOS, SKIN_SEX_FEMALE}},
    {!"gungrl", !"Helena Wankstein", {SKIN_LOCAL_BLUEBERRY, SKIN_SEX_FEMALE}},
    {!"mecgrl", !"Michelle Cannes", {SKIN_LOCAL_SF, SKIN_SEX_FEMALE}},
    {!"nurgrl", !"Katie Zhan", {SKIN_LOCAL_SF, SKIN_SEX_FEMALE}},
    {!"crogrl", !"Millie Perkins", {SKIN_LOCAL_LV, SKIN_SEX_FEMALE}},
    {!"gangrl", !"Denise Robinson", {SKIN_LOCAL_LS, SKIN_SEX_FEMALE}},
    {!"cwfofr", !"Farm-Town inhabitant", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"cwfohb", !"Hillbilly 5", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"cwfyfr1", !"Farm-Town inhabitant 2", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"cwfyfr2", !"Farm-Town inhabitant 3", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"cwmyhb2", !"Hillbilly 6", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"dwfylc2", !"Farmer 3", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"dwmylc2", !"Farmer 4", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"omykara", !"Karate Teacher", {SKIN_LOCAL_SF | SKIN_LOCAL_GYM, SKIN_SEX_MALE}},
    {!"wmykara", !"Karate Teacher 2", {SKIN_LOCAL_SF | SKIN_LOCAL_GYM, SKIN_SEX_MALE}},
    {!"wfyburg", !"Burger Shot Cashier", {SKIN_LOCAL_BURGER_SHOT, SKIN_SEX_FEMALE}},
    {!"vwmycd", !"Cab Driver", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"vhfypro", !"Prostitute 6", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"suzie", !"Su Xi Mu", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"omonood", !"Noodle stand vendor", {SKIN_LOCAL_NOODLE_STANDS, SKIN_SEX_MALE}},
    {!"omoboat", !"Boating School Instructor", {SKIN_LOCAL_BOATING_SCHOOL, SKIN_SEX_MALE}},
    {!"wfyclot", !"Clothes shop staff", {SKIN_LOCAL_CLOTHES_SHOPS, SKIN_SEX_FEMALE}},
    {!"vwmotr1", !"Homeless", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"vwmotr2", !"Weird old man", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"vwfywai", !"Maria Latore", {SKIN_LOCAL_CUTSCENE | SKIN_LOCAL_CASINO, SKIN_SEX_FEMALE}},
    {!"sbfori", !"Explorer", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"swfyri", !"Turtleneck", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wmyclot", !"Clothes shop staff", {SKIN_LOCAL_CLOTHES_SHOPS, SKIN_SEX_MALE}},
    {!"sbfost", !"Old Woman", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"sbfyri", !"Rich Woman", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"sbmocd", !"Cab Driver", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"sbmori", !"Beardo Casual", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"sbmost", !"Beardo Clubbing", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"shmycr", !"Greasy Nightclubber", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"sofori", !"Elderly Asian 1", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"sofost", !"Elderly Asian 2", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"sofyst", !"Legwarmers 2", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"somobu", !"Oriental Businessman", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"somori", !"Oriental Ped", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"somost", !"Oriental Ped", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"swmotr", !"Homeless", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"swfori", !"Grannie", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"swfost", !"Grouchy lady", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"swfyst", !"Hoop Earrings 2", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"swmocd", !"Cab Driver", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"swmori", !"Retired Tourist", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"swmost", !"Happy Old Man", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"shfypro", !"Prostitute 7", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"sbfypro", !"Prostitute 8", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"swmotr", !"Homeless", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"swmyri", !"The D.A", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"smyst", !"Afro-American", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"smyst2", !"Mexican", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"sfypro", !"Prostitute 9", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"vbfyst2", !"Stripper", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"vbfypro", !"Prostitute 10", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"vhfyst", !"Stripper", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"bikera", !"Biker", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bikerb", !"Biker", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmypimp", !"Pimp", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"swmycr", !"Green Tshirt", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wfylg", !"Lifeguard", {SKIN_LOCAL_BEACHES, SKIN_SEX_FEMALE}},
    {!"wmyva2", !"Naked Valet", {SKIN_LOCAL_MISSION | SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"bmosec", !"Bus Driver", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"bikdrug", !"Biker Drug Dealer", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"wmych", !"Chauffeur", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"sbfystr", !"Stripper", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"swfystr", !"Stripper", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"heck1", !"Heckler", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"heck2", !"Heckler", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmycon", !"Construction Worker", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"wmycd1", !"Cab driver", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"bmocd", !"Cab driver", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"vwfywa2", !"Asian Hostess", {SKIN_LOCAL_SA, SKIN_SEX_FEMALE}},
    {!"wmoice", !"Clown", {SKIN_LOCAL_SA | SKIN_LOCAL_NULL, SKIN_SEX_MALE}},
    {!"tenpen", !"Frank Tenpenny", {SKIN_LOCAL_MISSION, SKIN_SEX_MALE}},
    {!"pulaski", !"Eddie Pulaski", {SKIN_LOCAL_MISSION, SKIN_SEX_MALE}},
    {!"hern", !"Jimmy Hernandez", {SKIN_LOCAL_MISSION, SKIN_SEX_MALE}},
    {!"dwayne", !"Dwayne", {SKIN_LOCAL_SF | SKIN_LOCAL_MISSION, SKIN_SEX_MALE}},
    {!"smoke", !"Big Smoke", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"sweet", !"Sweet", {SKIN_LOCAL_LS | SKIN_LOCAL_SF | SKIN_LOCAL_MISSION, SKIN_SEX_MALE}},
    {!"ryder", !"Ryder", {SKIN_LOCAL_LS | SKIN_LOCAL_SF | SKIN_LOCAL_MISSION, SKIN_SEX_MALE}},
    {!"forelli", !"Mafia Boss", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"tbone", !"T-Bone Mendez", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"laemt1", !"Paramedic", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"lvemt1", !"Paramedic 2", {SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"sfemt1", !"Paramedic 3", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"lafd1", !"Firefighter", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"lvfd1", !"Firefighter 2", {SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"sffd1", !"Firefighter 3", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"lapd1", !"LS Police Officer", {SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"sfpd1", !"SF Police Officer", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"lvpd1", !"LV Police Officer", {SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"csher", !"County Sheriff", {SKIN_LOCAL_COUNTRY, SKIN_SEX_MALE}},
    {!"lapdm1", !"LSPD Motorbike Cop", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"swat", !"S.W.A.T Special Forces", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"fbi", !"FBI Agent", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"army", !"SA Army Soldier", {SKIN_LOCAL_SA, SKIN_SEX_MALE}},
    {!"dsher", !"Desert Sheriff", {SKIN_LOCAL_DESERT, SKIN_SEX_MALE}},
    {!"zero", !"Zero", {SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"rose", !"Ken Rosenberg", {SKIN_LOCAL_MADD_DG_MANSION, SKIN_SEX_MALE}},
    {!"paul", !"Kent Paul", {SKIN_LOCAL_LV | SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"cesar", !"Cesar Vialpando", {SKIN_LOCAL_LS | SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"ogloc", !"OG Loc", {SKIN_LOCAL_LS | SKIN_LOCAL_BURGER_SHOT, SKIN_SEX_MALE}},
    {!"wuzimu", !"Wu Zi Mu", {SKIN_LOCAL_SF | SKIN_LOCAL_LV, SKIN_SEX_MALE}},
    {!"torino", !"Michael Toreno", {SKIN_LOCAL_LV | SKIN_LOCAL_SF, SKIN_SEX_MALE}},
    {!"jizzy", !"Jizzy B.", {SKIN_LOCAL_SF | SKIN_LOCAL_NULL, SKIN_SEX_MALE}},
    {!"maddogg", !"Madd Dogg", {SKIN_LOCAL_MADD_DG_MANSION | SKIN_LOCAL_LS, SKIN_SEX_MALE}},
    {!"cat", !"Catalina", {SKIN_LOCAL_FERN_RIDGE, SKIN_SEX_FEMALE}},
    {!"claude", !"Claude Speed", {SKIN_LOCAL_CUTSCENE, SKIN_SEX_MALE}},

    // WARNING
    // These skins (300 to 311) were added in SA-MP 0.3.7 RC3 and will not work in earlier versions!
    {!"lapdna", !"LS Police gun holster", {SKIN_LOCAL_NULL, SKIN_SEX_MALE}},
    {!"sfpdna", !"SF Police gun holster", {SKIN_LOCAL_NULL, SKIN_SEX_MALE}},
    {!"lvpdna", !"LV Police gun holster", {SKIN_LOCAL_NULL, SKIN_SEX_MALE}},
    {!"lapdpc", !"LS Police uniform", {SKIN_LOCAL_NULL, SKIN_SEX_MALE}},
    {!"lapdpd", !"LS Police uniform", {SKIN_LOCAL_NULL, SKIN_SEX_MALE}},
    {!"lvpdpc", !"LV Police uniform", {SKIN_LOCAL_NULL, SKIN_SEX_MALE}},
    {!"wfyclpd", !"LS Police", {SKIN_LOCAL_NULL, SKIN_SEX_FEMALE}},
    {!"vbfycpd", !"SF Police", {SKIN_LOCAL_NULL, SKIN_SEX_FEMALE}},
    {!"wfyclem", !"SF Paramedic", {SKIN_LOCAL_NULL, SKIN_SEX_FEMALE}},
    {!"wfycllv", !"LV Police", {SKIN_LOCAL_NULL, SKIN_SEX_FEMALE}},
    {!"csherna", !"Country Sheriff", {SKIN_LOCAL_NULL, SKIN_SEX_MALE}},
    {!"dsherna", !"Desert Sheriff", {SKIN_LOCAL_NULL, SKIN_SEX_MALE}}
};



// - - - - - - - - : functions

stock bool: IsValidSkinID (
    skinid
) {
    switch (skinid) {
        case 0..73, 75..311: {
            return 
                true
            ;            
        }
    }
    return 
        false
    ;
}

stock GetSkinModelName (
    skinid
) {
    static 
        __h_skin_string [MAX_SKIN_MODEL_NAME] = "\0"
    ;
    __h_skin_string = "unknown";
    if (IsValidSkinID (skinid))
        strunpack (__h_skin_string, __H_SKIN_INFO_VAR [skinid] [__h_skin_model_name], MAX_SKIN_MODEL_NAME);
    return 
        __h_skin_string
    ;
}

stock GetSkinName (
    skinid
) {
    static 
        __h_skin_string [MAX_SKIN_NAME] = "\0"
    ;
    __h_skin_string = "N/A";
    if (IsValidSkinID (skinid)) 
        strunpack (__h_skin_string, __H_SKIN_INFO_VAR [skinid] [__h_skin_name], MAX_SKIN_NAME);    
    return 
        __h_skin_string
    ;
}

stock GetSkinSex (
    skinid
) {
    return
        (IsValidSkinID (skinid)) ? (__H_SKIN_INFO_VAR [skinid] [__h_skin_data] [1]) : (-1)
    ;
}

stock GetSkinLocal (
    skinid
) {
    return
        (IsValidSkinID (skinid)) ? (__H_SKIN_INFO_VAR [skinid] [__h_skin_data] [0]) : (SKIN_LOCAL_NULL)
    ;
}

stock GetSkinLocalName (
    local
) {
    static 
        __h_skin_string [128],
        bool: __h_skin_already
    ; 
    __h_skin_string = "\0";
    __h_skin_already = false;

    if (local & SKIN_LOCAL_FERN_RIDGE) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_FERN_RIDGE);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_COUNTRY) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_COUNTRY);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_DESERT) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_DESERT);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_HOTDOG_VANS) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_HOTDOG_VANS);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_BOATING_SCHOOL) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_BOATING_SCHOOL);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_NOODLE_STANDS) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_NOODLE_STANDS);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_CUTSCENE) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_CUTSCENE);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_CLOTHES_SHOPS) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_CLOTHES_SHOPS);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_BLUEBERRY) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_BLUEBERRY);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_EL_QUEBRADOS) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_EL_QUEBRADOS);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_BURGER_SHOT) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_BURGER_SHOT);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_TATTO_SHOPS) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_TATTO_SHOPS);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_CLUCKIN_BELL) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_CLUCKIN_BELL);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_AMMUNATION) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_AMMUNATION);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_BAR) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_BAR);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_AREA_6) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_AREA_6);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_MISSION) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_MISSION);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_AROUND_SA) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_AROUND_SA);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_DOHERTY) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_DOHERTY);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_MADD_DG_MANSION) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_MADD_DG_MANSION);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_CASINO) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_CASINO);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_AIRPORTS) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_AIRPORTS);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_PIZZA_CO_) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_PIZZA_CO_);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_BEACHES) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_BEACHES);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_GYM) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_GYM);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_LV) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_LV);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_SF) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_SF);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_LS) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_LS);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_SA) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_SA);
        __h_skin_already = true;
    }
    if (local & SKIN_LOCAL_NULL) {
        if (__h_skin_already)
            strcat (__h_skin_string, ", ");
        strcat (__h_skin_string, _SKIN_LOCAL_NULL);
    }
    return
        __h_skin_string
    ;
}



// - - - - - - - - : hookbacks


public OnGameModeInit (

) {
    print ("                                                                                   ");
    print (" Loading include: h_skin_info.inc                                                  ");
    print ("                                                                                   ");
    print ("- - - - - - - - - - :                                                              ");
    print ("                                                                                   ");
    print ("   (C) Copyright by Y-Hypezin (R)                                                  ");
    print ("                                                                                   ");
    print ("    @include      : h_skin_info                                                    ");
    print ("    @version      : ( 1 )                                                          ");
    print ("    @infoV        : ( 1.36.6.0 )                                                   ");
    print ("    @date         : 13th march 2024                                                ");
    print ("                                                                                   ");
    print ("    @author       : Y-Hypezin                                                      ");
    print ("    @contributors : -                                                              ");
    print ("    @sent by      : Y-Hypezin                                                      ");
    print ("    @team         : Hyped                                                          ");
    print ("                                                                                   ");
    print ("- - - - - - - - - - :                                                              ");
    print ("                                                                                   ");
    print (" >> h_skin_info included v.1 (1.36.6.0)                                            ");
    print (" Loaded.                                                                           ");
    print ("                                                                                   ");

    #if (defined __OnGameModeInit_h_si)
        return 
            __OnGameModeInit_h_si (

            )
        ;
    #else 
        return 
            1
        ;
    #endif
}


// - - - - - - - - : hooks 


#if (defined _ALS_OnGameModeInit)
    #undef OnGameModeInit
#else
    #define _ALS_OnGameModeInit
#endif


// - - - - - - - - : + + +


#define OnGameModeInit __OnGameModeInit_h_si


// - - - - - - - - : + + +


#if (defined __OnGameModeInit_h_si)
	forward __OnGameModeInit_h_si (

    );
#endif


// - - - - - - - - : end