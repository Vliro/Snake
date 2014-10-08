#ifndef MAINFUNCS_H_INCLUDED
#define MAINFUNCS_H_INCLUDED

#include <SDL2/SDL.h>
#include "CircList.h"
#include "EventHandler.h"
struct snakepart {
    int x;
    int y;
};

/*
Alla globala variabler som kommer att behövas under applikationens körning. Dessa går att nå genom dess korrepsonderande get-funktioner. För att sätta t.ex. mainwindow behöver du derefernsera den. */
namespace constants {
    const snakepart center = {32,24};
    const Uint8 WIDTH = 24;
    const Uint8 HEIGHT = 32;
}

/* Statiska variabler som bara går att nå genom Get-funktioner, för att undvika konflikterande variabler. */

static SDL_Window * mainwindow;
static CircList<snakepart> * snake;

/* Funktionsprototyper */

/* Kör denna funktion vid starten. Den kommer initiera det viktigaste för att starta snake. Returnerar 0 vid lyckad körning.*/
extern bool StartSnake();
extern void QuitSnake();

/* Returnerar en pekare till huvudfönstret. */
extern SDL_Window * GetMainWindow();
extern CircList<snakepart> * GetSnake();



#endif // MAINFUNCS_H_INCLUDED
