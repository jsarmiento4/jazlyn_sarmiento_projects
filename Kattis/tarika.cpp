#include <iostream>

using namespace std; 

int main() {
  
int x , n, p;

cin >> x >> n; 

int rollover = x * (n + 1);

for(int i = 0; i < n; i++){
    
  cin >> p;
  
  rollover -= p;
}

  cout << rollover;
  
}