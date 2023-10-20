#include<stdio.h>

void main(){
    int n,sum = 0;

    //taking value of n
    printf("Please enter the value of N: ");
    scanf("%d",&n);

    //finding sum of n numbers after taking n numbers as input from the user
    for(int i=1;i<=n;i++){
        int val;
        printf("Enter the value of %d number : ",i);
        scanf("%d",&val);
        sum+=val;
    }
    printf("The resultant sum is : %d",sum);
}