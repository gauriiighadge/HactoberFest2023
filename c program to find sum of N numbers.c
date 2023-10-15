


// c program to find sum of N numbers :

#include <stdio.h>

int main() {

  int number;
  printf("Enter the Number : ");
  scanf("%d", &number);
  
  int sum=0;

  for(int i=1; i<=number; i++){

    sum=sum + i;

  }

  printf("Sum of given N numbers is :  %d", sum);

  return 0;

}
