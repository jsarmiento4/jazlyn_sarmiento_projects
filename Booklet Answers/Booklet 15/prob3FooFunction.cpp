#include <iostream>

using namespace std; 


double foo(double x) {
  cout << x << endl;  
  return x - (int)x; 
}

int main() {

  double a = 3.5; 
  cout << foo(a) << endl;
  return 0; 
}