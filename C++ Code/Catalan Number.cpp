/*Catalan numbers are defined as a mathematical sequence that consists of positive integers, which can be used to find the number of possibilities of various combinations. 

The nth term in the sequence denoted Cn, is found in the following formula: \frac{(2n)!}{(n + 1)! n!)}               */

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long int catalan(int n)
{
    if (n <= 1)
        return 1;

    long int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += catalan(i) * catalan(n - i - 1);
    }

    return res;
}
int main()
{
    int n;
    cout << "Enter number ";
    cin >> n;
    long int x;
    x = catalan(n);
    cout << "Catalan number for n = " << n << " is " << x << endl;
}
