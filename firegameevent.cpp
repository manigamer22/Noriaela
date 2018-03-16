//
// Created by toxicoverflow on 23.02.17.
//

#include "main.hpp"
#include "skinchanger.h"

bool hkFireEventClientSide(void* thisptr, IGameEvent* event){

    if(event){
        skinchanger->FireEventClientSide(event);
    }

    return game_event_vmt->GetOriginalMethod< tFireGameEvent >(11)(thisptr, event);
}
