#include <iostream>
using namespace std;

int main() {
  int i, max, temp, counter = 0;

  cout << "How many values?" << endl;
  cin >> i;

  cout << "Enter " << i << " values: ";
  while(counter < i){
    cin >> temp;
    if(counter == 0)
      max = temp;
    else {
      if(max < temp)
        max = temp;
    }
    counter++;
  }
  cout << "Max: " << max;
}