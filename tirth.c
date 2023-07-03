#include<stdio.h>
 
 int crud(int a[],int n)
 {
 	int choioce;
 	
 	printf("enter 1 to insert in array\n");
 	printf("enter 2 to update in array\n");
 	printf("enter 3 to delete in array\n");
 	printf("enter 4 to display in array\n");
 	printf("enter 5 to exit!!\n");
 	scanf("%d",&choice);

 	switch(choice)
 	{
 		case 1:
 			n=insert(a,n);
 			system("clear");
 			break;
 		case 2:
 			update(a,n);
 			system("clear");
 			break;
 		case 3:
 			n=minus(a,n);
 			system("clear");
 			break;
 		case 4:
 			display(a,n);
 			system("clear");
 			break;
 		case 5:
 			break;
 		default:
 			printf("invalid choice | try again!!");
 			system("clear");
 			break;
	 }
	 	return choice;
}
int insert(int a[],int n)
{
	int i,pos,val;
	
	printf("enter position :- ");
	scanf("%d",&pos);
	printf("enter value :- ");
	scanf("%d",&val);
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=val;
	n++;
	return n;
}
void update (int a[],int n)
{
	int i,pos,val;
	printf("enter position :- ");
	scanf("%d",&pos);
	printf("enter value :- ");
	scanf("%d",&val);
	
	for(i=n;i>pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=val;
	n++;
	
}
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("a[%d] :- %d\n",i,a[i];
	}
}
int minus(int a[],int n)
{
	int i,pos,val;
	
	printf("enter position :- ");
	scanf("%d",&pos);
	printf("enter value :- ");
	scanf("%d",&val);
	for(i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	n--;
	return n;	
}
void arrayinput(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter element: ");
		scanf("%d",&a[i]);
	}
}

void main()
{
	int n,choice;
	printf("enter length of array: ");
	scanf("%d",&n);
	
	int a[n];
	
	arrayinput(a,n);
	do
	{
		choice=crud(a,n);
	}
	while(choice!=5);
}
	
	
	
	
	
	
	
	
	
	
	
	  
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
