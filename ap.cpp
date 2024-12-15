#include <stdio.h>

int main() {
    int (*p)[2];
    int a[2][2] = {{1, 2}, {3, 4}};
    p = a;
    printf("%d\n%d\n", (*p)[1], (*p+1)[1]);
    return 0;
}
