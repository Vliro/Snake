#include "MainFuncs.h"
#include "CircList.h"



const snakepart center = {320, 240};

bool StartSnake()
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Init(SDL_INIT_TIMER);
    mainwindow = SDL_CreateWindow("Snake", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
    snakepart * head = new snakepart();
    *head = center;
    CircList<snakepart> snake(head);
    return 0;
}

SDL_Window * GetMainWindow()
{
    return mainwindow;
}