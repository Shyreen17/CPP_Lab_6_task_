#include <iostream>
#include <string>
using namespace std;
int main() {
    int* dynamicInt = new int;
    string* dynamicString = new string;
  cout << "Enter an integer value: ";
  cin >> *dynamicInt;
  cout << "Enter a string: ";
  cin.ignore();
    getline(cin, *dynamicString);
    cout << "Dynamic Integer: " << *dynamicInt << endl;
    cout << "Dynamic String: " << *dynamicString << endl;
delete dynamicInt;
delete dynamicString;
    return 0;
}
