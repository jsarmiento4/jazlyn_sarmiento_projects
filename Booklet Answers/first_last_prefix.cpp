#include <iostream>
#include <string>

using namespace std;

int main() {
 string first_name, last_name, prefix;

 cout << "Enter your first name, last name, and prefix: " << endl;
 cin >> first_name >> last_name >> prefix;

 cout << "Should I call you " << first_name << " or " << prefix << " " << last_name << "?" << endl;


 return 0;
}