#include <iostream>
#include <time.h>
using namespace std;
int main() {
  srand(time(NULL));

  int num = rand() % 6;
  char letter;

  if (num == 0) letter = 'A';
  else if (num == 1) letter = 'E';
  else if (num == 2) letter = 'I';
  else if (num == 3) letter = 'O';
  else if (num == 4) letter = 'U';
  else if (num == 5) letter = 'Y';
  
  cout << letter;
}