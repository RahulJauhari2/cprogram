#include<stdio.h>
int main()
{
	int x=5;
	int *p;
	p=&x;
	*p=10;
	printf("%d",*p);
}
