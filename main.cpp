#include <iostream>
using namespace std;

class GameManager
{
   public void ShowInstructions()
   {
   
   }  
}

int main()
{
   GameManager game;
   char input;
   do
   {
      game.ShowInstructions();
      cin >> input;
   }
   game.StartGame();
   cout << "Main" << endl;
}
