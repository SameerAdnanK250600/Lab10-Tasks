#include <stdio.h>

int main() {
    int size, i, j;
    
    printf("Enter the size of the diamond: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Size must be a positive integer!\n");
        return 1;
    }

    for (i = 1; i <= size; i++) {
        for (j = i; j < size; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = size - 1; i >= 1; i--) {
        for (j = size; j > i; j--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
