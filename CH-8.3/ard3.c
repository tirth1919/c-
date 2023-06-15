#include<stdio.h>
main()
{
	int r,c;
	printf("enter row: ");
	scanf("%d",&r);
	printf("enter column: ");
	scanf("%d",&c);
	
	int a[r][c],i,j,b[r][c];
	
	for(i=0;i<r;i++)
	{
	 	for(j=0;j<c;j++)
		 {
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		 }	
	}	
	 	for(i=0;i<r;i++)
	
	ave=sum/(r*c); 
	printf("%d",ave);
}
