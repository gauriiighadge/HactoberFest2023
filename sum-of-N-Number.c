#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. The number of elements should be a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    printf("Sum of %d numbers is: %.2f\n", n, sum);

    return 0;
}
