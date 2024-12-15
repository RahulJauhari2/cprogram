#include<stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* p;
    p = arr;
    printf("%d \n %d \n %d", *p, *(p+1) , *