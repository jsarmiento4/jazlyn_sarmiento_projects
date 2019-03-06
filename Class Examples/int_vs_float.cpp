#include <iostream>
using namespace std;
int main() {
  float num;
  
  cout << "Enter a dollar value: ";
  cin >> num;

  float decimal_component = num - (int)num;
  int base_component = num;
  cout << "That is " << base_component << " dollars and " << decimal_component * 100 << " cents.";
}