cmake_minimum_required(VERSION 3.6)
project(Noriaela)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES C_BaseEntity.h Color.h common.h CUserCmd.h framestage.cpp hacks.hpp Hooks.cpp Hooks.hpp IBaseClientDLL.h IClientEntityList.h ICvar.h IEngineClient.h IEngineTrace.h IMaterial.h interfaces.cpp interfaces.hpp IPanel.h ISurface.h IVDebugOverlay.h IVModelInfo.h main.cpp main.hpp netvarmanager.cpp netvarmanager.h offsets.cpp offsets.h Others.h Vector.h VMT.h VMatrix.h skinchanger.cpp skinchanger.h GameEvent.h firegameevent.cpp)
add_library(Noriaela SHARED ${SOURCE_FILES})
