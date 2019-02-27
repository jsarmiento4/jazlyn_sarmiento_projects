#include <iostream>
using namespace std;

int main() {
 int n,input,sum = 0,avg = 0,i = 0;
  cout << "How many values?" << endl;
 cin >> n;
 cout << "Enter " << n << " values: ";
 while (i < n){
   cin >> input;
   sum += input;
   i ++;
 }
 avg = sum/n;
 cout << "sum: " << sum << endl;
 cout << "average: " << avg;
}
