#ifndef main_hpp
#define main_hpp

#include <stdio.h>
#include <string>
#include <cstdint>
#include <unordered_map>
#include <sys/mman.h>
#include <dlfcn.h>
#include <fstream>
#include <mach/mach_traps.h>
#include <mach/mach_init.h>
#include <mach/mach_error.h>
#include <mach/mach.h>
#include <mach-o/dyld_images.h>
#include <mach-o/loader.h>
#include <libproc.h>
#include <sys/stat.h>
#include <cstddef>
#include <codecvt>
#include <cstring>
#include <sstream>
#include <vector>
#include <string>
#include <vector>
#include <strings.h>
#include <string>
#include <ios>
#include <iomanip>
#include <pwd.h>
#include <zconf.h>
#include <fstream>
#include <cstdio>

using namespace std;

#include "SDK/Vector.h"
#include "SDK/Others.h"
#include "SDK/common.h"
#include "SDK/GameEvent.h"
#include "SDK/Color.h"
#include "SDK/IBaseClientDLL.h"
#include "SDK/ISurface.h"
#include "SDK/IPanel.h"
#include "SDK/ICvar.h"
#include "SDK/netvarmanager.h"
#include "SDK/offsets.h"
#include "SDK/C_BaseEntity.h"
#include "SDK/IClientEntityList.h"
#include "SDK/IVDebugOverlay.h"
#include "SDK/IEngineClient.h"
#include "SDK/IEngineTrace.h"
#include "SDK/IMaterial.h"
#include "SDK/IVModelInfo.h"
#include "SDK/CUserCmd.h"

/* Hack Related. */
#include "hacks.hpp"

/* VMT */
#include "SDK/VMT.h"

/* Hooks */
#include "Interfaces/Hooks.hpp"

/* Interfaces */
#include "Interfaces/interfaces.hpp"



#endif /* main_hpp */
