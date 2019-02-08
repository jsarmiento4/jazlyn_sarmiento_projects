#include <iostream>
#include <string>

using namespace std;

int main() {

 string answer = "";

 while (answer != "y" && answer != "Y" && answer != "yes") {
   cout << "Are we there yet? " << endl;
   cin >> answer;
 }



return 0;
}
