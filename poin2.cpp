#include <stdio.h>

int main() {
    int x = 10;
    void* ptr = &x;  // Assign address of x to void pointer

    // Typecast void pointer to int pointer
    int* int_ptr = (int*)ptr;

    // Access and print integer value
    printf("Value of x: %d\n", *int_ptr);

    return 0;
}