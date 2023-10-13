#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter the No. a \n");
    scanf("%d", &a);

    printf("Enter the No. b \n");
    scanf("%d", &b);

    printf("Enter the No. c \n");
    scanf("%d", &c);

    printf("Enter the No. d \n");
    scanf("%d", &d);

    // Greater of three

    // if (a>b)
    // {
    //     if (a>c)
    //     {
    //         printf("a is greatest");
    //     }
    //     else{
    //         printf("c is greatest");
    //     }
    // }
    // else if(b>c){
    //     printf("b is greatest");
    // }
    // else{
    //     printf("c is greatest");
    // }

    // Greater of four
if (a>b)
{
    if (a>c)
    {
        if (a>d)
        {
            printf("a is greatest of four");
        }
        
    }
    else if (c>d)
    {
        printf("c is greatest of four");
    }
    else
    {
        printf("d is greatest of four");        
    }
    
}
else if (b>c)
{
    if (b>d)
    {
        printf("b is greatest of four");
    }
    else
    {
        printf("d is greatest of four");
    }
    
}
else if (c>d)
{
    printf("c is greatest of four");
}
else
{
    printf("d is greatest of four");
}

    return 0;
}