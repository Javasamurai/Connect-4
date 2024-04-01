#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include "Grid.hpp"
class Player
{
public:
    Player(int playerID);
    int TakeInput(Grid &grid);
    int GetPlayerID();
private:
    int playerID;
};
#endif
