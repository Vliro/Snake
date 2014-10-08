//
//  Maths.h
//  Snake
//
//  Created by Albert Sjölund on 2014-10-08.
//  Copyright (c) 2014 Albert Sjölund. All rights reserved.
//

#ifndef Snake_Maths_h
#define Snake_Maths_h
#include "MainFuncs.h"

SDL_Rect * PartToRect(snakepart * h) {
    SDL_Rect * ret = new SDL_Rect();
    ret->x = h->x;
    ret->y = h->y;
    ret->w = constants::WIDTH;
    ret->h = constants::HEIGHT;
}
void CreateSnake(CircList<snakepart> * a)
{
    snakepart * ret = new snakepart();
    switch(getdir())
    {
        case SDLK_UP:
            ret->x = a->gettail().x;
            ret->y = a->gettail().y + constants::HEIGHT;
            break;
        case SDLK_DOWN:
            ret->x = a->gettail().x;
            ret->y = a->gettail().y + constants::HEIGHT;
            break;
        case SDLK_LEFT:
            ret->x = a->gettail().x - constants::WIDTH;
            ret->y = a->gettail().y;
            break;
        case SDLK_RIGHT:
            ret->x = a->gettail().x + constants::WIDTH;
            ret->y = a->gettail().y;
            break;
        default:
            return;
    }
    a->add(ret);
}

#endif
