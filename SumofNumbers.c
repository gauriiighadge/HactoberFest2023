#include <stdio.h>

int main() {
    int n;           // Declare a variable to store the number of elements
    int sum = 0;     // Initialize a variable to store the sum of numbers
    int num;         // Declare a variable to store each input number

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if the user entered a valid positive integer for 'n'
    if (n <= 0) {
        printf("Please enter a positive integer for the number of elements.\n");
        return 1;  // Exit the program with an error code
    }

    // Prompt the user to enter 'n' numbers and calculate their sum
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        sum += num;  // Add the entered number to the sum
    }

    // Display the sum of the entered numbers
    printf("Sum of %d numbers is: %d\n", n, sum);

    return 0;  // Exit the program with a success code
}
