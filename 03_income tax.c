#include<stdio.h>

int main()
{
    float tax = 0, income;
    printf("Enter Your Income \n");
    scanf("%f", &income);

    if (income >=250000 && income <=500000)
    {
        tax = tax + 0.05*(income - 250000);
    }
    if (income >=500000 && income <= 1000000)
    {
        tax = tax + .20*(income - 500000);
    }
    if (income >=1000000)
    {
        tax = tax + .30*(income - 1000000);
    }
    
    printf("The Tax you have to pay till the 26th of this month is %f", tax);
    return 0;
}