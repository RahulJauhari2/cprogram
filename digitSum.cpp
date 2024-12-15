#include <stdio.h>
int main(){
	int n,x,y,z;
	printf("Please enter any three digit number\n");
	scanf("%d",&n);
	x=n%10;
	y= n/10;
	y=y%10;
	z=n/100;
	printf("1st digit= %d\n2nd digit= %d\n3rd digit= %d\ntotal =%d",x,y,z,x+y+z);
	return 0;
}
