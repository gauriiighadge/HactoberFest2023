#include <iostream>
using namespace std;
int main() {
  int a;
  cout << "Enter the number: "; cin >> a;
  if (a % 2 == 0) {
     cout << "The given number is EVEN" << endl;
  }
  else {
     cout << "The given number is ODD" << endl;
  }
  return 0;
}
