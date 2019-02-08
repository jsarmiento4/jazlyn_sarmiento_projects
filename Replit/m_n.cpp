#include <iostream>
using namespace std;

int main() {
  int M, N, O;
  char letter;
  int ascii;

  cout << "Enter m and n: " << endl;
  cin >> M >> N;

  O = M + N;
  while (N < 0){
    ascii = N + 96;
    letter = ascii;
    if (ascii < 123){
      cout << letter << " ";
    }
    N++;
  }
  return 0;
}