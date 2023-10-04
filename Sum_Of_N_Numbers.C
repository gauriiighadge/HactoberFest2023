#include<stdio.h>

int nSum(int n)
{
    int sum = (n*(n+1))/2;
    return sum;
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("The of number till %d = %d.", n, nSum(n));
    
    return 0;
}
