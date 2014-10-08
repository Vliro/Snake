#include <SDL2/SDL.h>
#include "MainFuncs.h"
#include "EventHandler.h"
#include "Maths.h"

int main ( int argc, char** argv )
{
    StartSnake();
    SDL_Surface * surface = SDL_GetWindowSurface(GetMainWindow());
    snakepart b = constants::center;
    SDL_FillRect(surface, PartToRect(&b), SDL_MapRGB(surface->format, 220, 220, 220));
    SDL_UpdateWindowSurface(GetMainWindow());
    SDL_Delay(3000);
    keyboardloop();
    SDL_UpdateWindowSurface(GetMainWindow());
    SDL_Delay(3000);
    SDL_DestroyWindow(GetMainWindow());
    SDL_Quit();
}

