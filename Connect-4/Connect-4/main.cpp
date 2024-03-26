#include "Player.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;

class GameManager {
public:
  void ShowInstructions() {
    cout << "-------- WELCOME TO CONNECT 4 --------" << endl;
    cout << "RULES" << endl;
    cout << "1. Two players are required to play this game."
         << "2. Board size is 6 rows and 7 columns."
         << "3. A player wins if he/she is able to connect 4 dots "
            "horizontally, vertically or diagonally."
         << "4. Draw occurs when the board is fully filled." << endl;
    cout << "---------------------------------------" << endl;
    cout << "How to play:" << endl;
    cout << "1. Game always starts with player - 1 i.e. Red"
         << " (R)."
         << "2. In each turn, player picks the number in the range of 1 and 7 "
            "3. Rows will be filled from bottom to top in every turn."
         << endl;
    cout << "---------------------------------------" << endl;
    cout << "Here for demo, I am 4*4 board but you should take 6*7" << endl;
    cout << "Enter Y/y to play the game or any other key to exit." << endl;
    cout << "--------------------------";
    cout << "GAME STARTS NOW" << endl;
    cout << "--------------------------" << endl;
  }
  void StartGame() {
      cout << "Starting game....";
      Grid grid;
      Player p1(0);
      Player p2(1);
      // 0 is p1, 1 is p2
      int turn = 0;
      bool over = false;
      int input = -1;
      if (turn == 0)
      {
          input = p1.TakeInput(grid);
      }
      else
      {
          input = p2.TakeInput(grid);
      }
      if (grid.IsConnected(input))
      {
          if (turn == 0)
          {
              cout << "P1 wins" << endl;
          }
          else
          {
              cout << "P2 wins" << endl;
          }
      }
      turn = turn == 0 ? 1 : 0;
  }
};
int main() {
  GameManager game;
  char input;
  do {
    game.ShowInstructions();
    cin >> input;
  } while (input != 'Y' && input != 'y');
  game.StartGame();
}
