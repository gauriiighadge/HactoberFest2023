#include <stdio.h>

int main() {
    int n;
    
    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    // Calculate the sum using the formula
    int sum = n * (n + 1) / 2;
    
    // Output the result
    printf("Sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
