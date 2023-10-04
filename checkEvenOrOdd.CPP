#include<iostream>
using namespace std;

string checkNumber(int n)
{
    if(n%2 == 0)
        return "Number is Even.";
    return "Number is Odd.";
}

int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;

    cout<<checkNumber(n);

    return 0;
}
