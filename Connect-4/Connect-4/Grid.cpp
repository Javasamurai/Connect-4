#include "Grid.hpp"
#include "iostream"
#include "Cell.hpp"
#include "vector"
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

bool Grid::IsConnected(Cell* cell, int value)
{
    vector<vector<int>> directions = {{0, 1}, {1, 0}, {1, 1}, {1, -1}, {0, -1}};

    int row = cell->row;
    int col = cell->col;
    // Iterate b/w directions
    
    for (const auto& dir : directions) {
        int directionRow = dir[0];
        int directionCol = dir[1];

        if (CheckNeighbours(1, row, col, value, directionRow, directionCol))
        {
            return true;
        }
    }
    
    return false;
}
bool Grid::CheckNeighbours(int currentConnections, int currentRow, int currentCol, int value, int dirr, int dirc)
{
    int maxConnections = 4;
    bool outofBounds = currentRow <= 0 || currentRow >= ROWS || currentCol <= 0 || currentCol >= COLS;
    Cell* c = new Cell(currentRow, currentCol);
    
    cout << "Cell:" << currentRow << ":" << currentCol << endl;
    if (!IsConnected(c, value) || !outofBounds) {
        return currentConnections >= maxConnections;
    }
    return CheckNeighbours(currentConnections + 1, currentRow + dirr, currentCol + dirc, value, dirr, dirc);
}

bool Grid::IsSameValue(Cell* cell1, Cell* cell2)
{
    if (cells[cell1->row][cell1->col] == cells[cell2->row][cell2->col])
    {
        return true;
    }
    return false;
}

Cell* Grid::AddElementAt(int playerId, int col)
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
    Cell* cell = new Cell(emptyRow, col);
    cells[emptyRow][col] = playerId;
    return cell;
}
