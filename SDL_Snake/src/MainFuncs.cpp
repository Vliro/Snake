#include "MainFuncs.h"
#include "CircList.h"

struct snakepart {
    int x,y;
};

extern const snakepart center;

bool StartSnake()
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Init(SDL_INIT_TIMER);
    gamewindow = SDL_CreateWindow("Snake", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
    snakepart head = center;
    snakepart two = {13,37};
    snakepart three = {14,42};
    CircList<snakepart> snake(&head);
    snake.add(&two);
    snake.add(&three);
    return 0;
}
