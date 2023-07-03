#include<stdio.h>

	int fact(int n)
	{
		if(n>0)
		{
			return n*fact(n-1);
		}	
	else{
		return 1;
		}
	}
	
	
   int main() 
	{
		int n,multi;
		printf("enter n: ");
		scanf("%d",&n);
		
		printf("factorial: %d",fact(n));
	}


