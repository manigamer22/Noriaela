typedef void(*tPaintTraverse)(void*, VPANEL, bool, bool);
typedef void(*tFrameStage)(void*, ClientFrameStage_t);
typedef bool(*tFireGameEvent)(void*, IGameEvent*);
typedef void(*tCreateMove)(void*, int, float, bool);

extern void hkFrameStage(void* thisptr, ClientFrameStage_t curStage);
extern bool hkCreateMove(void* thisptr, float flSampleInput, CUserCmd* pCmd);
extern bool hkFireEventClientSide(void* thisptr, IGameEvent* event);
extern void hkCreateMove(void* thisptr, int sequence_number, float input_sample_frametime, bool active);

