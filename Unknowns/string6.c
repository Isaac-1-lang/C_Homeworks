#include <stdio.h>

int main() {
    int b[10];
    
    printf("Enter 10 numbers: \n");
    for(int p = 0; p < 10; p++) {
        scanf("%d", &b[p]);
    }

    int length = 10;
    int temp;

    
    for(int i = 0; i < (length - 1); i++) {
        for(int j = 0; j < length - i - 1; j++) {
            if(b[j] > b[j + 1]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }

    printf("The ascending order is: ");
    for(int v = 0; v < length; v++) {
        printf("%d\t", b[v]);
    }
    printf("\n");

    for(int i = 0; i < (length - 1); i++) {
        for(int j = 0; j < length - i - 1; j++) {
            if(b[j] < b[j + 1]) { 
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            } 
        }
    }

    printf("The descending order is: ");
    for(int q = 0; q < length; q++) {
        printf("%d\t", b[q]);
    }
    printf("\n");

    return 0;
}