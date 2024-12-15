#include<stdio.h>
int lastindex =0;
void appand(int data , int a[]);
void printarray(int a[]);
void insert(int index , int data , int a[]);
int main(){
	int a[10];
	printarray(a);
	appand(10,a);
	appand(20,a);
	appand(30,a);
	printarray(a);
	insert(1,50,a);
	insert(2,90,a);
	
	printf("after\n");
	printarray(a);
	
	return 0;
}
void appand(int data , int a[])
{
a[lastindex]=data;
lastindex++;	
}
void printarray(int a[]){
	int i;
	for(i=0;i<lastindex;i++){
		printf("%d\t",a[i]);
	}
}
void insert(int index , int data , int a[]){
	for(int i = lastindex ;i >=0 ;i--){
		a[i+1]=a[i];
		
	}
	a[index-1]=data;
	lastindex++;
}
