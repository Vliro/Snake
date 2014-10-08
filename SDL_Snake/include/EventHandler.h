//
//  EventHandler.h
//  Snake
//
//  Created by Albert Sjölund on 2014-10-08.
//  Copyright (c) 2014 Albert Sjölund. All rights reserved.
//

#ifndef Snake_EventHandler_h
#define Snake_EventHandler_h
#include <SDL2/SDL.h>




char keyboardloop()
{
    static bool keydown = false;
    SDL_Event key;
    while (SDL_PollEvent(&key)) {
        switch(key.type)
    case SDL_KEYDOWN:
        keydown = true;
        return
    }
}

#endif
