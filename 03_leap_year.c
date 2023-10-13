    //   if ((s1==0) && (s2!=0) && (s3!=0))
    //   {
    //     printf("The Year is a leap year");
    //   }
    //    else{

    //     printf("The year is not a leap year");
    //    }
    // wrong

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the Year \n");
    scanf("%d", &year);

    float s1 = year%4;
    float s2 = year%100;
    float s3 = year%400;


    if (s1 == 0)
    {
        if (s2 == 0)
        {
           if (s3 == 0)
           {
            printf("The year is a leap Year");
           }
           else
           {
            printf("The year is not leap Year");
           }
           
        }
        else
        {
            printf("The year is a leap Year");
        }
    }
    else
    {
        printf("The year is not leap Year");
    }

// if (((year % 4 ==0) && (year % 100 != 0)) || (year%400==0))
// {
//     printf("The year is a leap Year");
// }
// else
// {
//     printf("The year is not leap Year");
// }

    return 0;
}