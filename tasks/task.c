#include <stdio.h>
#include <stdlib.h>

/**
 * argv[1] - number 1
 * argv[2] - number 2
*/
int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <number 1> <number 2>\n", argv[0]);
        return 0;
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if (num1 < 1 || num2 < 1) {
        printf("Error: both numbers must be integers greater than 0\n");
        return 1;
    }

    printf("Sum: %d\n", num1 + num2); 
    return 0; // Exit successfully
}
