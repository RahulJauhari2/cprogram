#include <stdio.h>

int main() {
    int (*p[3])[3][3];
    int a[3][3] = {{13, 2,10}, {3, 5,4}};
    int b[3][3] = {{21, 22}, {23, 24}};
	p[0]=&a;
	p[1]=&b;

   printf("%d\n%d\n", (*p[0])[0][0],(*p[1])[0][0]);
    return 0;
}

