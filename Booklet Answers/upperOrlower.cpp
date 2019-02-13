#include <iostream>
using namespace std;

int main() {
  char letter;

 cout << "Enter a letter: ";
 cin >> letter;

 if (letter >= 'a' && letter <= 'z') {
   letter = toupper(letter);
   cout << letter;
 } else if (letter >= 'A' && letter <= 'Z') {
   letter = tolower(letter);
   cout << letter;
 }
 else {
   cout << "Invalid Letter";
 }

 return 0;
}