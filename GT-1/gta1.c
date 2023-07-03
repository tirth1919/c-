#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sud(int a,int b)
{
	return a-b;
}
int mati(int a,int b)
{
	return a*b;
}
int divi(int a,int b)
{
	return a/b;
}
int pert(int a,int b)
{
	return a%b;
}

void main()
{
	int choice;
	m:
	printf("enter your choise number..\n");
	printf("1)press for 1 +\n");
	printf("2)press for 2 -\n");
	printf("3)press for 3 *\n");
	printf("4)press for 4 /\n");
	printf("5)press for 5 %\n");
	printf("0)exit........\n");
	scanf("%d",&choice);
	
	int a,b;
	if(choice ==1 || choice ==2 || choice ==3 || choice ==4 || choice ==5)
	{
	printf("enter first number :");
	scanf("%d",&a);
	printf("enter second number :");
	scanf("%d",&b);
    }
	
	switch(choice)
	{
		case 1:
			{
			add(a,b);
			printf("%d\n",a+b);
			goto m;
	        }
	break;
	    case 2:
			{
			sud(a,b);
			printf("%d\n",a-b);
			goto m;
	        }
	break;
	    case 3:
			{
			mati(a,b);
			printf("%d\n",a*b);
			goto m;
	        }
	break;
	    case 4:
			{
			divi(a,b);
			printf("%d\n ",a/b);
			goto m;
	        }
	break;
	    case 5:
			{
			pert(a,b);
			printf("%d\n",a%b);
			goto m;
	        }
	break;
	    case 0:
	    	default:
	    		{
	    			printf("thank you .");
				}
    }
}
