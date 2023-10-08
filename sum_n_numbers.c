#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1; // Exit with an error code
    }

    printf("Enter %d numbers:\n", n);

    for (i = 1; i <= n; ++i) {
        double num;
        printf("Enter number %d: ", i);
        scanf("%lf", &num);
        sum += num;
    }

    printf("Sum = %.2lf\n", sum);

    return 0;
}
