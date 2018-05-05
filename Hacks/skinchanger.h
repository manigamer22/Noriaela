#include "../main.hpp"

void HSequenceProxyFn(const CRecvProxyData *pDataConst, void *pStruct, void *pOut);

class cSkin{
public:
    
    cSkin(){}
    
    cSkin(int paintkit, int seed, int itemDefinition, int stattrack, int EntityQuality, char* szName, float flWear) :
            Paintkit(paintkit), Seed(seed), ItemDefinition(itemDefinition), StatTrack(stattrack), EntityQuality(EntityQuality), name(szName), Wear(flWear){}

    int Paintkit = 0;
    int Seed = 0;
    int ItemDefinition = 0;
    int StatTrack = -1;
    int EntityQuality = 0;
    char* name = nullptr;
    float Wear = 0.0001f;
};

class cSkinchanger {
public:
    static unordered_map<int, cSkin> SkinList;
    static unordered_map<int, const char*> ModelList;

    unordered_map<int, string> KnifeToModelMatrix = unordered_map<int, string>({
        {WEAPON_KNIFE_BAYONET, "models/weapons/v_knife_bayonet.mdl"}, // Bayonet Knife
        {WEAPON_KNIFE_FLIP, "models/weapons/v_knife_flip.mdl"}, // Flip Knife
        {WEAPON_KNIFE_GUT, "models/weapons/v_knife_gut.mdl"}, // Gut Knife
        {WEAPON_KNIFE_KARAMBIT, "models/weapons/v_knife_karam.mdl"}, // Karambit Knife 
        {WEAPON_KNIFE_M9_BAYONET, "models/weapons/v_knife_m9_bay.mdl"}, // M9 Knife
        {WEAPON_KNIFE_TACTICAL, "models/weapons/v_knife_tactical.mdl"}, // Huntsman Knife
        {WEAPON_KNIFE_FALCHION, "models/weapons/v_knife_falchion_advanced.mdl"}, // Falchion Knife 
        {WEAPON_KNIFE_SURVIVAL_BOWIE, "models/weapons/v_knife_survival_bowie.mdl"}, // Bowie Knife 
        {WEAPON_KNIFE_BUTTERFLY, "models/weapons/v_knife_butterfly.mdl"}, // Butterfly Knife 
        {WEAPON_KNIFE_PUSH, "models/weapons/v_knife_push.mdl"} // Shadow Daggers 
    });

    unordered_map<size_t, string> EntityQuality = {
    {0, "Normal"},
    {1, "Genuine"},
    {2, "Vintage"},
    {3, "Unusual"},
    {5, "Community"},
    {6, "Developer"},
    {7, "Self-Made"},
    {8, "Customized"},
    {9, "Strange"},
    {10, "Completed"},
    {12, "Tournament"}
    };
    void FireEventClientSide(IGameEvent* event);
    void FindModels();
    void Init();
    void ForceSkins();
    void FrameStageNotify(ClientFrameStage_t stage);

    C_BaseEntity* pLocalPlayer = nullptr;

    bool bInit = false;
};

extern cSkinchanger* skinchanger;
