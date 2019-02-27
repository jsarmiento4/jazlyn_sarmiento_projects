#include <iostream>
#include <time.h>

using namespace std;


int main() {
 srand(42);

 int val = rand() % 10;

 cout << val << endl;

 return 0;
}
