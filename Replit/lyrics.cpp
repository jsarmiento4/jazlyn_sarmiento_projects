#include <iostream>
using namespace std;

int main() { 
 
 int numBottles;
 int finalNumBottles; 

 cout << "How many bottles of beer are on the wall?" << endl;
 cin >> numBottles;

 cout << "When should the song end? (enter number of bottles)" << endl;
 cin >> finalNumBottles;

 string wordForBottles = " bottles ";

 while (numBottles > finalNumBottles) {
   

   cout << numBottles << wordForBottles << "of beer on the wall. ";
   cout << numBottles << wordForBottles << "of beer. ";
   cout << "Take one down, pass it around, ";

   numBottles--;

   if (numBottles == 1)
     wordForBottles = " bottle ";
   cout << numBottles << wordForBottles << "of beer on the wall." << endl;
 }


 return 0;
}
