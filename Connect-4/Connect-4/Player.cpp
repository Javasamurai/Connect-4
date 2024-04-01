#include <iostream>
#include "Player.hpp"
#include "Grid.hpp"

using namespace std;

Player:: Player(int _playerID)
{
    playerID = _playerID;
}
int Player::GetPlayerID()
{
    return playerID;
}

int Player:: TakeInput(Grid &grid)
{
    cout << "Taking input from:" << playerID << endl;
    int col;
    do {
        cout << "Enter column number:" << endl;
        cin >> col;
        if (grid.IsColFull(col))
        {
            cout << "Invalid input, column already full" << endl;
        }
    } while (col < 0 || col > COLS || grid.IsColFull(col));

    return col;
};
