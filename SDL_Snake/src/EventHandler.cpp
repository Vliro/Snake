#include "EventHandler.h"
#include <iostream>

static SDL_Keycode dir = SDLK_RIGHT;

SDL_Keycode & getdir()
{
    return dir;
}

void keyboardloop()
{
    SDL_Event key;
    while (SDL_PollEvent(&key)) {
    switch(key.type)
    {
        case SDL_KEYDOWN:
        case SDL_KEYUP:
            switch(key.key.keysym.sym)
            {
                case SDLK_UP:
                    if(dir != SDLK_DOWN)
                        dir = SDLK_UP;
                    break;
                case SDLK_DOWN:
                    if(dir != SDLK_UP)
                        dir = SDLK_DOWN;
                    break;
                case SDLK_LEFT:
                    if(dir != SDLK_RIGHT)
                        dir = SDLK_LEFT;
                    break;
                case SDLK_RIGHT:
                    if(dir != SDLK_LEFT)
                        dir = SDLK_RIGHT;
                    break;
                default:
                    break;
            }
        }
    }
}
