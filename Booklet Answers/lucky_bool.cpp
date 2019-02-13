#include <iostream>
using namespace std;

int main(){
  int number;

  cout << "Enter a number: ";
  cin >> number;

  bool lucky = (number == 7);

  cout << lucky << endl;
  return 0;
}