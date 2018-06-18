#include "../main.h"
#include "Config.h"
#include "skins.h"

using namespace std;

Config* skins_cfg = new Config();
SkinList skin;

const char* Config;
string user = getenv("USER");
string skins = "/Users/"+user+"/Noriaela/Build/skins.cfg";

int GetIntValue(bool Value) {
    return Value;
}

float GetFloatValue(float Value) {
    return Value;
}

bool fileExist(const char* path) {
    struct stat info;
    return stat(path, &info) == 0 && S_ISREG(info.st_mode);
}

void Config::InitSkins() {
	if(!fileExist(skins.c_str()))
		return;
	skins_cfg.SetUnicode(true);

	skins_cfg.SetDoubleValue("weapon_deagle", "id", GetFloatValue(skin.deagle));
    skins_cfg.SetDoubleValue("weapon_deagle", "itemdef", GetFloatValue(1));
    
    skins_cfg.SetDoubleValue("weapon_elite", "id", GetFloatValue(skin.dual));
    skins_cfg.SetDoubleValue("weapon_elite", "itemdef", GetFloatValue(2));
    
    skins_cfg.SetDoubleValue("weapon_fiveseven", "id", GetFloatValue(skin.five7));
    skins_cfg.SetDoubleValue("weapon_fiveseven", "itemdef", GetFloatValue(3));
    
    skins_cfg.SetDoubleValue("weapon_glock", "id", GetFloatValue(skin.glock));
    skins_cfg.SetDoubleValue("weapon_glock", "itemdef", GetFloatValue(4));
    
    skins_cfg.SetDoubleValue("weapon_ak47", "id", GetFloatValue(skin.ak47));
    skins_cfg.SetDoubleValue("weapon_ak47", "itemdef", GetFloatValue(7));
    
    skins_cfg.SetDoubleValue("weapon_aug", "id", GetFloatValue(skin.aug));
    skins_cfg.SetDoubleValue("weapon_aug", "itemdef", GetFloatValue(8));
    
    skins_cfg.SetDoubleValue("weapon_awp", "id", GetFloatValue(skin.awp));
    skins_cfg.SetDoubleValue("weapon_awp", "itemdef", GetFloatValue(9));
    
    skins_cfg.SetDoubleValue("weapon_famas", "id", GetFloatValue(skin.famas));
    skins_cfg.SetDoubleValue("weapon_famas", "itemdef", GetFloatValue(10));
    
    skins_cfg.SetDoubleValue("weapon_g3sg1", "id", GetFloatValue(skin.g3));
    skins_cfg.SetDoubleValue("weapon_g3sg1", "itemdef", GetFloatValue(11));
    
    skins_cfg.SetDoubleValue("weapon_galilar", "id", GetFloatValue(skin.galil));
    skins_cfg.SetDoubleValue("weapon_galilar", "itemdef", GetFloatValue(13));
    
    skins_cfg.SetDoubleValue("weapon_m249", "id", GetFloatValue(skin.m249));
    skins_cfg.SetDoubleValue("weapon_m249", "itemdef", GetFloatValue(14));
    
    skins_cfg.SetDoubleValue("weapon_m4a1", "id", GetFloatValue(skin.m4a4));
    skins_cfg.SetDoubleValue("weapon_m4a1", "itemdef", GetFloatValue(16));
    
    skins_cfg.SetDoubleValue("weapon_mac10", "id", GetFloatValue(skin.mac10));
    skins_cfg.SetDoubleValue("weapon_mac10", "itemdef", GetFloatValue(17));
    
    skins_cfg.SetDoubleValue("weapon_p90", "id", GetFloatValue(skin.p90));
    skins_cfg.SetDoubleValue("weapon_p90", "itemdef", GetFloatValue(19));
    
    skins_cfg.SetDoubleValue("weapon_ump45", "id", GetFloatValue(skin.ump));
    skins_cfg.SetDoubleValue("weapon_ump45", "itemdef", GetFloatValue(24));
    
    skins_cfg.SetDoubleValue("weapon_xm1014", "id", GetFloatValue(skin.xm));
    skins_cfg.SetDoubleValue("weapon_xm1014", "itemdef", GetFloatValue(25));
    
    skins_cfg.SetDoubleValue("weapon_bizon", "id", GetFloatValue(skin.bizon));
    skins_cfg.SetDoubleValue("weapon_bizon", "itemdef", GetFloatValue(26));
    
    skins_cfg.SetDoubleValue("weapon_mag7", "id", GetFloatValue(skin.mag7));
    skins_cfg.SetDoubleValue("weapon_mag7", "itemdef", GetFloatValue(27));
    
    skins_cfg.SetDoubleValue("weapon_negev", "id", GetFloatValue(skin.negev));
    skins_cfg.SetDoubleValue("weapon_negev", "itemdef", GetFloatValue(28));
    
    skins_cfg.SetDoubleValue("weapon_sawedoff", "id", GetFloatValue(skin.sawed));
    skins_cfg.SetDoubleValue("weapon_sawedoff", "itemdef", GetFloatValue(29));
    
    skins_cfg.SetDoubleValue("weapon_tec9", "id", GetFloatValue(skin.tec9));
    skins_cfg.SetDoubleValue("weapon_tec9", "itemdef", GetFloatValue(30));
    
    skins_cfg.SetDoubleValue("weapon_hkp2000", "id", GetFloatValue(skin.p2000));
    skins_cfg.SetDoubleValue("weapon_hkp2000", "itemdef", GetFloatValue(32));
    
    skins_cfg.SetDoubleValue("weapon_mp7", "id", GetFloatValue(skin.mp7));
    skins_cfg.SetDoubleValue("weapon_mp7", "itemdef", GetFloatValue(33));
    
    skins_cfg.SetDoubleValue("weapon_mp9", "id", GetFloatValue(skin.mp9));
    skins_cfg.SetDoubleValue("weapon_mp9", "itemdef", GetFloatValue(34));
    
    skins_cfg.SetDoubleValue("weapon_nova", "id", GetFloatValue(skin.nova));
    skins_cfg.SetDoubleValue("weapon_nova", "itemdef", GetFloatValue(35));
    
    skins_cfg.SetDoubleValue("weapon_p250", "id", GetFloatValue(skin.p250));
    skins_cfg.SetDoubleValue("weapon_p250", "itemdef", GetFloatValue(36));
    
    skins_cfg.SetDoubleValue("weapon_scar20", "id", GetFloatValue(skin.scar));
    skins_cfg.SetDoubleValue("weapon_scar20", "itemdef", GetFloatValue(38));
    
    skins_cfg.SetDoubleValue("weapon_sg556", "id", GetFloatValue(skin.sg));
    skins_cfg.SetDoubleValue("weapon_sg556", "itemdef", GetFloatValue(39));
    
    skins_cfg.SetDoubleValue("weapon_ssg08", "id", GetFloatValue(skin.scout));
    skins_cfg.SetDoubleValue("weapon_ssg08", "itemdef", GetFloatValue(40));
    
    skins_cfg.SetDoubleValue("weapon_knife", "id", GetFloatValue(skin.CTKnifeID));
    skins_cfg.SetDoubleValue("weapon_knife", "itemdef", GetFloatValue(skin.KnifeCT));
    
    skins_cfg.SetDoubleValue("weapon_knife_t", "id", GetFloatValue(skin.TKnifeID));
    skins_cfg.SetDoubleValue("weapon_knife_t", "itemdef", GetFloatValue(skin.KnifeT));
    
    skins_cfg.SetDoubleValue("weapon_m4a1_silencer", "id", GetFloatValue(skin.m4a1));
    skins_cfg.SetDoubleValue("weapon_m4a1_silencer", "itemdef", GetFloatValue(60));
    
    skins_cfg.SetDoubleValue("weapon_usp_silencer", "id", GetFloatValue(skin.usp));
    skins_cfg.SetDoubleValue("weapon_usp_silencer", "itemdef", GetFloatValue(61));
    
    skins_cfg.SetDoubleValue("weapon_cz75a", "id", GetFloatValue(skin.cz));
    skins_cfg.SetDoubleValue("weapon_cz75a", "itemdef", GetFloatValue(63));
    
    skins_cfg.SetDoubleValue("weapon_revolver", "id", GetFloatValue(skin.revolver));
    skins_cfg.SetDoubleValue("weapon_revolver", "itemdef", GetFloatValue(64));

    skins_cfg.SaveFile(skins.c_str());
}

void Config::UpdateSkins() {
	skins_cfg.SetUnicode(true);

	skins_cfg.SetDoubleValue("weapon_deagle", "id", GetFloatValue(skin.deagle));
    skins_cfg.SetDoubleValue("weapon_deagle", "itemdef", GetFloatValue(1));
    
    skins_cfg.SetDoubleValue("weapon_elite", "id", GetFloatValue(skin.dual));
    skins_cfg.SetDoubleValue("weapon_elite", "itemdef", GetFloatValue(2));
    
    skins_cfg.SetDoubleValue("weapon_fiveseven", "id", GetFloatValue(skin.five7));
    skins_cfg.SetDoubleValue("weapon_fiveseven", "itemdef", GetFloatValue(3));
    
    skins_cfg.SetDoubleValue("weapon_glock", "id", GetFloatValue(skin.glock));
    skins_cfg.SetDoubleValue("weapon_glock", "itemdef", GetFloatValue(4));
    
    skins_cfg.SetDoubleValue("weapon_ak47", "id", GetFloatValue(skin.ak));
    skins_cfg.SetDoubleValue("weapon_ak47", "seed", GetFloatValue(skin.ak_Seed));
    skins_cfg.SetDoubleValue("weapon_ak47", "itemdef", GetFloatValue(7));
    
    skins_cfg.SetDoubleValue("weapon_aug", "id", GetFloatValue(skin.aug));
    skins_cfg.SetDoubleValue("weapon_aug", "itemdef", GetFloatValue(8));
    
    skins_cfg.SetDoubleValue("weapon_awp", "id", GetFloatValue(skin.awp));
    skins_cfg.SetDoubleValue("weapon_awp", "itemdef", GetFloatValue(9));
    
    skins_cfg.SetDoubleValue("weapon_famas", "id", GetFloatValue(skin.famas));
    skins_cfg.SetDoubleValue("weapon_famas", "itemdef", GetFloatValue(10));
    
    skins_cfg.SetDoubleValue("weapon_g3sg1", "id", GetFloatValue(skin.g3sg1));
    skins_cfg.SetDoubleValue("weapon_g3sg1", "itemdef", GetFloatValue(11));
    
    skins_cfg.SetDoubleValue("weapon_galilar", "id", GetFloatValue(skin.galil));
    skins_cfg.SetDoubleValue("weapon_galilar", "itemdef", GetFloatValue(13));
    
    skins_cfg.SetDoubleValue("weapon_m249", "id", GetFloatValue(skin.m249));
    skins_cfg.SetDoubleValue("weapon_m249", "seed", GetFloatValue(skin.m249_Seed));
    skins_cfg.SetDoubleValue("weapon_m249", "itemdef", GetFloatValue(14));
    
    skins_cfg.SetDoubleValue("weapon_m4a1", "id", GetFloatValue(skin.m4a4));
    skins_cfg.SetDoubleValue("weapon_m4a1", "itemdef", GetFloatValue(16));
    
    skins_cfg.SetDoubleValue("weapon_mac10", "id", GetFloatValue(skin.mac10));
    skins_cfg.SetDoubleValue("weapon_mac10", "itemdef", GetFloatValue(17));
    
    skins_cfg.SetDoubleValue("weapon_p90", "id", GetFloatValue(skin.p90));
    skins_cfg.SetDoubleValue("weapon_p90", "itemdef", GetFloatValue(19));
    
    skins_cfg.SetDoubleValue("weapon_ump45", "id", GetFloatValue(skin.ump));
    skins_cfg.SetDoubleValue("weapon_ump45", "itemdef", GetFloatValue(24));
    
    skins_cfg.SetDoubleValue("weapon_xm1014", "id", GetFloatValue(skin.xm));
    skins_cfg.SetDoubleValue("weapon_xm1014", "itemdef", GetFloatValue(25));
    
    skins_cfg.SetDoubleValue("weapon_bizon", "id", GetFloatValue(skin.bizon));
    skins_cfg.SetDoubleValue("weapon_bizon", "itemdef", GetFloatValue(26));
    
    skins_cfg.SetDoubleValue("weapon_mag7", "id", GetFloatValue(skin.mag7));
    skins_cfg.SetDoubleValue("weapon_mag7", "itemdef", GetFloatValue(27));
    
    skins_cfg.SetDoubleValue("weapon_negev", "id", GetFloatValue(skin.negev));
    skins_cfg.SetDoubleValue("weapon_negev", "itemdef", GetFloatValue(28));
    
    skins_cfg.SetDoubleValue("weapon_sawedoff", "id", GetFloatValue(skin.sawed));
    skins_cfg.SetDoubleValue("weapon_sawedoff", "itemdef", GetFloatValue(29));
    
    skins_cfg.SetDoubleValue("weapon_tec9", "id", GetFloatValue(skin.tec9));
    skins_cfg.SetDoubleValue("weapon_tec9", "itemdef", GetFloatValue(30));
    
    skins_cfg.SetDoubleValue("weapon_hkp2000", "id", GetFloatValue(skin.p2000));
    skins_cfg.SetDoubleValue("weapon_hkp2000", "itemdef", GetFloatValue(32));
    
    skins_cfg.SetDoubleValue("weapon_mp7", "id", GetFloatValue(skin.mp7));
    skins_cfg.SetDoubleValue("weapon_mp7", "seed", GetFloatValue(skin.mp7_Seed));
    skins_cfg.SetDoubleValue("weapon_mp7", "itemdef", GetFloatValue(33));
    
    skins_cfg.SetDoubleValue("weapon_mp9", "id", GetFloatValue(skin.mp9));
    skins_cfg.SetDoubleValue("weapon_mp9", "itemdef", GetFloatValue(34));
    
    skins_cfg.SetDoubleValue("weapon_nova", "id", GetFloatValue(skin.nova));
    skins_cfg.SetDoubleValue("weapon_nova", "itemdef", GetFloatValue(35));
    
    skins_cfg.SetDoubleValue("weapon_p250", "id", GetFloatValue(skin.p250));
    skins_cfg.SetDoubleValue("weapon_p250", "seed", GetFloatValue(skin.p250_Seed));
    skins_cfg.SetDoubleValue("weapon_p250", "itemdef", GetFloatValue(36));
    
    skins_cfg.SetDoubleValue("weapon_scar20", "id", GetFloatValue(skin.scar));
    skins_cfg.SetDoubleValue("weapon_scar20", "itemdef", GetFloatValue(38));
    
    skins_cfg.SetDoubleValue("weapon_sg556", "id", GetFloatValue(skin.sg));
    skins_cfg.SetDoubleValue("weapon_sg556", "itemdef", GetFloatValue(39));
    
    skins_cfg.SetDoubleValue("weapon_ssg08", "id", GetFloatValue(skin.scout));
    skins_cfg.SetDoubleValue("weapon_ssg08", "itemdef", GetFloatValue(40));
    
    skins_cfg.SetDoubleValue("weapon_knife", "id", GetFloatValue(skin.CTKnifeID));
    skins_cfg.SetDoubleValue("weapon_knife", "itemdef", GetFloatValue(skin.KnifeCT));
    
    skins_cfg.SetDoubleValue("weapon_knife_t", "id", GetFloatValue(skin.TKnifeID));
    skins_cfg.SetDoubleValue("weapon_knife_t", "itemdef", GetFloatValue(skin.KnifeT));
    
    skins_cfg.SetDoubleValue("weapon_m4a1_silencer", "id", GetFloatValue(skin.m4a1));
    skins_cfg.SetDoubleValue("weapon_m4a1_silencer", "itemdef", GetFloatValue(60));
    
    skins_cfg.SetDoubleValue("weapon_usp_silencer", "id", GetFloatValue(skin.usp));
    skins_cfg.SetDoubleValue("weapon_usp_silencer", "itemdef", GetFloatValue(61));
    
    skins_cfg.SetDoubleValue("weapon_cz75a", "id", GetFloatValue(skin.cz));
    skins_cfg.SetDoubleValue("weapon_cz75a", "itemdef", GetFloatValue(63));
    
    skins_cfg.SetDoubleValue("weapon_revolver", "id", GetFloatValue(skin.revolver));
    skins_cfg.SetDoubleValue("weapon_revolver", "itemdef", GetFloatValue(64));
    
    skins_cfg.SaveFile(skins.c_str());
}

void Config::LoadSkins() {
	if(!fileExist(skins.c_str()))
		InitSkins();

	skins_cfg.SetUnicode(true);
	skins_cfg.LoadFile(skins.c_str());

	skin.TKnifeID   = skin_cfgget_f("weapon_knife_t", "id");
    skin.CTKnifeID  = skin_cfgget_f("weapon_knife", "id");
    
    skin.galil   = skin_cfgget_f("weapon_galilar", "id");
    skin.famas   = skin_cfgget_f("weapon_famas", "id");
    skin.ak47    = skin_cfgget_f("weapon_ak47", "id");
    skin.m4a4    = skin_cfgget_f("weapon_m4a1", "id");
    skin.m4a1    = skin_cfgget_f("weapon_m4a1_silencer", "id");
    skin.scout   = skin_cfgget_f("weapon_ssg08", "id");
    skin.sg      = skin_cfgget_f("weapon_sg556", "id");
    skin.aug     = skin_cfgget_f("weapon_aug", "id");
    skin.awp     = skin_cfgget_f("weapon_awp", "id");
    skin.g3sg1   = skin_cfgget_f("weapon_scar20", "id");
    skin.scar    = skin_cfgget_f("weapon_g3sg1", "id");
    
    skin.glock   = skin_cfgget_f("weapon_glock", "id");
    skin.usp     = skin_cfgget_f("weapon_usp_silencer", "id");
    skin.p2000   = skin_cfgget_f("weapon_hkp2000", "id");
    skin.dual    = skin_cfgget_f("weapon_elite", "id");
    skin.p250    = skin_cfgget_f("weapon_p250", "id");
    skin.tec9    = skin_cfgget_f("weapon_tec9", "id");
    skin.five7   = skin_cfgget_f("weapon_fiveseven", "id");
    skin.cz      = skin_cfgget_f("weapon_cz75a", "id");
    skin.deagle  = skin_cfgget_f("weapon_deagle", "id");
    skin.revolver= skin_cfgget_f("weapon_revolver", "id");
    
    skin.mac10   = skin_cfgget_f("weapon_mac10", "id");
    skin.mp9     = skin_cfgget_f("weapon_mp9", "id");
    skin.mp7     = skin_cfgget_f("weapon_mp7", "id");
    skin.ump     = skin_cfgget_f("weapon_ump45", "id");
    skin.p90     = skin_cfgget_f("weapon_p90", "id");
    skin.bizon   = skin_cfgget_f("weapon_bizon", "id");
    
    skin.nova    = skin_cfgget_f("weapon_nova", "id");
    skin.sawed   = skin_cfgget_f("weapon_sawedoff", "id");
    skin.mag7    = skin_cfgget_f("weapon_mag7", "id 7");
    skin.xm      = skin_cfgget_f("weapon_xm1014", "id");
    skin.m249    = skin_cfgget_f("weapon_m249", "id");
    skin.negev   = skin_cfgget_f("weapon_negev", "id");
}

bool Config::HasWeaponConfiguration(const char* section) {
	skins_cfg.LoadFile(skin.c_str());
	CSimpleIniA::TNamesDepend sections;
	skins_cfg.GetAllSections(sections);
	sections.sort(CSimpleIniA::Entry::LoadOrder());

	for(auto sect:sections) {
		if(!strcmp(section, sec.pItem)) {
			return true;
		}
	}
	return false;
}

cSkin Config::GetWeaponConfiguration(const char *section) {
	skins_cfg.LoadFile(skins.c_str());
	cSkin weapon_config;

	weapon_config.Paintkit		= (int)skin_cfgget_f(section, "id");
	weapon_config.ItemDefinition= (int)skin_cfgget_f(section, "itemdef");

	return weapon_config;
}