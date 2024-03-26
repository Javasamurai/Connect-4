#ifndef Grid_hpp
#define Grid_hpp

#define ROWS 4
#define COLS 7
#define MIN_CONNECTIONS 4

#include <iostream>
class Grid
{
    public:
    Grid();
    void AddElementAt(int playerId, int col);
    void ShowGrid();
    bool IsConnected(int col);
    bool IsColFull(int col);
    private:
    int cells[ROWS][COLS];
};

#endif
