#include "../main.h"
#include "../Hacks/skinchanger.h"

bool bOnce = false; /*https://www.unknowncheats.me/forum/1190911-post11.html */

void hkFrameStage(void* thisptr, ClientFrameStage_t curStage) {
    skinchanger->FrameStageNotify(curStage);
    client_vmt->GetOriginalMethod<tFrameStage>(36)(thisptr, curStage);
}
