#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. The number of elements should be greater than 0.\n");
        return 1; // Exit with an error code
    }

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        double num;
        scanf("%lf", &num);
        sum += num;
    }

    printf("The sum of the %d numbers is: %.2lf\n", n, sum);

    return 0; // Exit with a success code
}
