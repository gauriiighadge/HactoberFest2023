#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the trailing newline character, if present
    if (input[strlen(input) - 1] == '\n') {
        input[strlen(input) - 1] = '\0';
    }

    int length = strlen(input);
    printf("Reversed string: ");
    
    for (int i = length - 1; i >= 0; i--) {
        printf("%c", input[i]);
    }
    
    printf("\n");

    return 0;
}
