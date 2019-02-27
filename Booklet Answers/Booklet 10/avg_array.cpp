#include <iostream>
using namespace std; 

int main() {
  int vals[5] = {1, 1, 3, 2}; 
  double sum;
   for (int i = 0; i < 4; i++){
      sum += vals[i];
   }
   cout << "average: " << sum/4;
   return 0; 
}