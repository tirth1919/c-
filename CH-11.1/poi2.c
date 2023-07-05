#include<stdio.h>
void main()
{
	int x,y;
	int*ptr;
	printf("enter x: ");
	scanf("%d",&x);
	printf("enter y: ");
	scanf("%d",&y);
	
	printf("before swapping: \n");
	printf("x:%d\ny:%d\n",x,y);
	
	printf("after swapping: \n");
	ptr=&y;
	printf("x:%d\n",*ptr);
	ptr=&x;
	printf("y:%d\n",*ptr);
	
}
