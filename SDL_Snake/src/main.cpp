#include <SDL2/SDL.h>
#include "MainFuncs.h"

int main ( int argc, char** argv )
{
    StartSnake();
    SDL_Surface * surface = SDL_GetWindowSurface(GetMainWindow());
    SDL_Rect b;
    b.h = 16;
    b.w = 12;
    b.x = 100;
    b.y = 100;
    SDL_FillRect(surface, &b, SDL_MapRGB(surface->format, 220, 220, 220));
    SDL_UpdateWindowSurface(GetMainWindow());
    SDL_Delay(10000);
}

