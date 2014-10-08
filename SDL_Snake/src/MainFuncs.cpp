#include "MainFuncs.h"
#include "CircList.h"
#include "EventHandler.h"



bool StartSnake()
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Init(SDL_INIT_TIMER);
    mainwindow = SDL_CreateWindow("Snake", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
    snakepart * head = new snakepart();
    *head = constants::center;
    CircList<snakepart> * snake = new CircList<snakepart>(head);
    return 0;
}

SDL_Window * GetMainWindow()
{
    return mainwindow;
}

CircList<snakepart> * GetSnake()
{
    return snake;
}

void MainGameLoop()
{

}
