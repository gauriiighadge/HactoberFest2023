#include<stdio.h>

int main()
{
    // ASCII VALUE FOR a-z is 97-122

    char ch;
    printf("Enter the Character\n");
    scanf("%c", &ch);

    if (ch<=122 && ch>=97)
    {
        printf("It is lowercase");
    }
    else
    {
        printf("It is not lowercase");
        
    }
    
    return 0;
}