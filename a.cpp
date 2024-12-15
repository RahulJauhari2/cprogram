#include<stdio.h>
int main(){
    int * p;
    int a[5]={2,5,7,9};

    p = a;
    printf("%d",*p+2);
    return 0;
}
