#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 5 // Number of rows in the matrix
#define COLS 5 // Number of columns in the matrix

int main() {
    int matrix[ROWS][COLS];
    int x, count = 0;

    // Seed the random number generator
    srand(time(NULL));

    // Generate the matrix with random numbers (range: 0 to 9)
    printf("Generated Matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 10; // Random number between 0 and 9
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Prompt the user for the integer x
    printf("\nEnter an integer value (x): ");
    scanf("%d", &x);

    // Count occurrences of x in the matrix
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == x) {
                count++;
            }
        }
    }

    // Display the result
    printf("\nThe value %d appears %d time(s) in the matrix.\n", x, count);

    return 0;
}
