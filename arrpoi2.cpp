#include <stdio.h>

int main() {
    // Declare two 2D arrays with different sizes
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[3][4] = {{21, 22, 23, 24}, {25, 26, 27, 28}, {29, 30, 31, 32}};

    // Declare an array of void pointers
    void* ptr[2];

    // Assign addresses of arrays a and b
    ptr[0] = a;
    ptr[1] = b;

    // Access and print elements (requires casting)
    printf("\nArray a:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", ((int (*)[2])ptr[0])[i][j]);
        }
        printf("\n");
    }

    printf("\nArray b:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", ((int (*)[4])ptr[1])[i][j]);
        }
        printf("\n");
    }

    return 0;
}

