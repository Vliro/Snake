#ifndef MAINFUNCS_H_INCLUDED
#define MAINFUNCS_H_INCLUDED

#include <SDL2/SDL.h>
#include "CircList.h"

struct snakepart {
    int x,y;
};

extern const snakepart center = {32, 14};

extern SDL_Window * gamewindow;
extern CircList<snakepart> snake;


bool StartSnake();
void Gameloop();



#endif // MAINFUNCS_H_INCLUDED
