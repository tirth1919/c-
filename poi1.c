#include<stdio.h>

void main(){
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	
	int a[n],i,square;
	int *ptr;
	
	ptr=&a;
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",ptr+i);
	}
	
	printf("square of elements :\n");
	for(i=0;i<n;i++)
	{
	printf("%d\n",*(ptr+i)**(ptr+i));
	}
	
}
