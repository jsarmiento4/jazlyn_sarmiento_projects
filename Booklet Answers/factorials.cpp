#include <iostream>
using namespace std;

int main() {
 int n,input,sum = 0,factorial = 1,x;
  cout << "Enter an integer: ";
 cin >> n;
 x = n;
 while ( n> 1){
   factorial *= n;
   n--;
 }

 cout << x<<"! = " << factorial;
}