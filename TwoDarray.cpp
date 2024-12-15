#include<stdio.h>
int main()
{

	int a[3][3],x,y;
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			scanf("%d",&a[x][y]);
		}
	}
	for(x=0;x<3;x++)
	{
		for(y=0;y<3;y++)
		{
			printf("%5d",a[x][y]);
		}
		printf("\n");
	}
	return 0;
}
