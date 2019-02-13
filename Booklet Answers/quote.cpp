#include <iostream>
#include <string>

using namespace std;

int main() {
 string quote;

 cout << "Any words of wisdom? " << endl;
 getline(cin, quote);

 cout << "You said, \"" << quote << "\"" << endl;


 return 0;
}
