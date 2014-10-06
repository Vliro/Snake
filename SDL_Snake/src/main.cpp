#include <SDL2/SDL.h>
#include "MainFuncs.h"


int main ( int argc, char** argv )
{
    StartSnake();
    SDL_Surface *surface = SDL_GetWindowSurface(gamewindow);
    SDL_Rect b;
    b.h = 200;
    b.w = 200;
    b.x = 400;
    b.y = 200;
    SDL_FillRect(surface, &b, SDL_MapRGB(surface->format, 0xFB, 0x18, 0xFC));
    SDL_UpdateWindowSurface(gamewindow);
    SDL_Delay(1000);
}

