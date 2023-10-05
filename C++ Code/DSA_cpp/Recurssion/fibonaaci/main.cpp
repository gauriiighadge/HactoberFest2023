#include <iostream>
using namespace std;

long long int fibonacci(int n){
    if( n <= 2)
    return 1;
    
    return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    long long int n;
    cout << "Enter term" << endl;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}