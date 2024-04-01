#ifndef Grid_hpp
#define Grid_hpp

#define ROWS 4
#define COLS 7
#define MIN_CONNECTIONS 4

#include <iostream>
#include "Cell.hpp"

class Grid
{
    public:
    Grid();
    Cell* AddElementAt(int playerId, int col);
    void ShowGrid();
    bool IsConnected(Cell* cell, int value);
    bool IsColFull(int col);
    bool CheckNeighbours(int currentConnections, int currentRow, int currentCol, int value, int dirr, int dirc);
    private:
    int cells[ROWS][COLS];
    bool IsSameValue(Cell* cell1, int value);
    Cell cell;
};

#endif
