#include <iostream>
#include <time.h>
using namespace std;
int main() {
  srand(time(NULL));

  char rand_letter = rand() % 26 + 65;

  cout << rand_letter;
}