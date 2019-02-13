#include <iostream>
using namespace std;

int main() {
 char letter;

cout << "Enter a lowercase letter: ";
cin >> letter;

if (letter >= 'a' && letter <= 'z') {
  letter = toupper(letter);
  cout << letter;
} else {
  cout << "Invalid letter" << endl;
}

return 0;
}
