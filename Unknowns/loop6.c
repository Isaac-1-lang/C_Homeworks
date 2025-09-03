#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) { // Outer loop for rows
        for (j = 1; j <= n; j++) { // Inner loop for columns
            printf("*");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
