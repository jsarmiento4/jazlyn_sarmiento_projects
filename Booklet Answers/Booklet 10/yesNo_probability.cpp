#include <iostream>
#include <time.h>

using namespace std;


int main() {
 srand(time(NULL));

 int val = rand() % 2;

 if (val == 0) {
   cout << "Yes" << endl;
 } else {
   cout << "No" << endl;
 }

 return 0;
}
