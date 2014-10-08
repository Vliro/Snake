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

SDL_Rect * PartToRect(snakepart *);
snakepart * CreateSnake(CircList<snakepart> * a);

#endif
