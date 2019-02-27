#include <iostream>
#include <time.h>
using namespace std; 

int main() {
  srand(time(NULL));

  int n = rand() % 20 + 30; 
  cout << n << endl;
 
  
  return 0; 
}