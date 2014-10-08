#ifndef MAINFUNCS_H_INCLUDED
#define MAINFUNCS_H_INCLUDED

#include <SDL2/SDL.h>
#include "CircList.h"

struct snakepart {
    int x;
    int y;
};

/*
Alla globala variabler som kommer att behövas under applikationens körning. Dessa går att nå genom dess korrepsonderande get-funktioner. För att sätta t.ex. mainwindow behöver du derefernsera den. */
extern const snakepart center;
static SDL_Window * mainwindow;


/* Funktionsprototyper */

/* Kör denna funktion vid starten. Den kommer initiera det viktigaste för att starta snake. Returnerar 0 vid lyckad körning. */
extern bool StartSnake();

/* Returnerar en pekare till huvudfönstret. */
extern SDL_Window * GetMainWindow();



#endif // MAINFUNCS_H_INCLUDED
