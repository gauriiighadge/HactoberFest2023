#include<stdio.h>
int palindrome(int n){
    int givennumber=n, r=0;
    //in the above line r variable would be used to store reversed number.//
while(n>0){
    r=r*10+n%10;//here, in the loop the rightmost digit of givennumber will be extracted and will be stored in r variable.//
    n/=10;
}
return givennumber==r;
}
    int main(){
        int a;
        printf("enter a number:");
        scanf("%d",&a);
               
            if(palindrome(a)){
                printf("%d is a valid palindrome number.\n", a);
            }
            else{
                printf("%d isn't a palindrome number.\n", a);
            }
        return 0;
    }
