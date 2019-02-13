#include <iostream>

using namespace std;

int main() {


 int n;

 cout << "How many stars? " << endl;
 cin >> n;


 int count = 0;

 while (count < n) {
   cout << "*";
   count = count + 1;
 }

 cout << endl;

 return 0;
}