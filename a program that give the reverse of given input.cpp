
// A program that give the reverse of given input :

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{ 
  string user_input;
  cout << "Enter the input : ";
  cin >> user_input;

  for(int i = user_input.length() - 1; i >= 0; i--)
  {
      	cout << user_input[i];
  }

  cout << endl;
  
  return 0;

}
