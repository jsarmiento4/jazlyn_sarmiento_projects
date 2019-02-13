#include <iostream>

using namespace std;

int main()
{
int n;
int m;
cout << "Enter m and n: "
cin >> m >> n;

while (n > 0)
{
  if (n > 1){

  
  cout << m << ", ";
  }
  else if (n == 1){
    cout << m << ". ";
  }
  n = n - 1;
}

   return 0;
}