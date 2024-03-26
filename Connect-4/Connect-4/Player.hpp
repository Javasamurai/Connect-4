#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "Grid.hpp"
class Player
{
public:
    Player(int playerID);
    int TakeInput(Grid &grid);
private:
    int playerID;
};
#endif
