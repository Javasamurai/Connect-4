#include "Grid.hpp"
#include "iostream"
using namespace std;

Grid::Grid()
{
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cells[i][j] = -1;
        }
    }
}
void Grid:: ShowGrid()
{
    cout << "--------------------------" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (cells[i][j] != -1)
            {
                cout << "| " << cells[i][j] << "|";
            }
            else
            {
                cout << "| | ";
            }
        }
        cout << endl;
    }
    cout << "--------------------------" << endl;
}

bool Grid::IsColFull(int col)
{
    if (cells[0][col] != -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Grid::IsConnected(int col)
{
// Check if the diagonal match is there
// Check if horizontal match is there
// Check if vertical match is there
    if (col == 0)
    {
        
    }

    return false;
}

void Grid::AddElementAt(int playerId, int col)
{
    int emptyRow = ROWS - 1;
    cout << "Empty row?" << cells[emptyRow][col] << endl;

    while (cells[emptyRow][col] != -1 || emptyRow < 0)
    {
        emptyRow--;
    }
    cout << "Empty row:" << emptyRow << endl;
    // Add coin to the row
    cout << "Adding value to:" << emptyRow << ":"  << col << endl;
    cells[emptyRow][col] = playerId;
}
