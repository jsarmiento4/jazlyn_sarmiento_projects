#include <iostream>
 
using namespace std;
 
int main() {
 int num,val, sum=0, ave, ii=0;
 cout<< "How many values? " << endl;
 cin>> num;

 cout << "Enter " << num << " values: ";
 while(ii<num){
   cin >> val;
   sum=(sum+val);
   ii++;
 }
 ave=(sum/num);
 cout << "average: " << ave;
}