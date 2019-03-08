#include <iostream> 

using namespace std;

int main(){  
int x, y, reverse=0, reeverse = 0, rem1, rem2;       
cin >> x >> y;    

  while(x!=0 && y!=0)    
  {    
     rem1=x%10;
     rem2 =y%10;      
     reverse=reverse*10+rem1;
     reeverse = reeverse*10 +rem2;    
     x/=10;
     y/=10;    
  }    
  if(reverse > reeverse){
    cout << reverse << endl;
  }
  else {
    cout << reeverse << endl;
  }

return 0;  
} 