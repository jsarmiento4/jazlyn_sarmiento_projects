#include <iostream>
#include <ctime>
using namespace std; 

void playDiceGame() {
  while (true) {
  char nextMove;
  cout << "Type 'r' to roll or 'q' to quit" << endl;
  cin >> nextMove; 
      
  if (nextMove == 'q') break; 
      
  int rollValue = rand() % 6 + 1; 
  cout << "You rolled a " << rollValue << "!" << endl; 
}
}

void playCoinToss() { 
  while (true) {
    char nextMove;
    cout << "Type 't' to toss the coin or 'q' to quit" << endl;
    cin >> nextMove; 
      
    if (nextMove == 'q') break; 
      
    int tossValue = rand() % 2; 
      
    if (tossValue == 0)
      cout << "Heads!" << endl; 
    else 
      cout << "Tails!" << endl; 
   }
}
int main() {
  
  int gameChoice = 0; 
  srand(42); 
  
  cout << "Enter which game you would like to play: " << endl << 
    "1) role the die " << endl
    <<"2) coin toss" << endl; 
  
  
  cin >> gameChoice; 
  
  if (gameChoice == 1) {
    playDiceGame(); 
  } else if (gameChoice == 2) {
    playCoinToss(); 
  }

  return 0; 
}