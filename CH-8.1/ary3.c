#include<stdio.h>
main()
{
	int n;
	printf("enter n: ");
	scanf("%d",&n);
	
	int a[n],i,b[n],c[n];

	for(i=0;i<n;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("enter b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{	
		c[i]=a[i]+b[i];
			printf("c[i]; %d",c[i]);
}
}
