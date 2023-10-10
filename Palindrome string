#include <iostream>
#include <string>
using namespace std;

/*Reverse the string*/

bool Palindrometring(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (name[s] != name[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "enter the string";
    cin >> name;

    int n = getlength(name);

    cout << Palindrometring(name, n);

    return 0;
}
