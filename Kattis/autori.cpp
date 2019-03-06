#include <iostream>
#include <string>

using namespace std; 

int main() {
  
  string word;

  getline(cin, word);

  for(int i = 0; i < word.length(); i++){

    char letter = word[i];

    if(letter >= 'A' && letter <= 'Z'){
      cout << letter;
    }
  }
}