#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	for(i=1;i<=5;i++)
	{
	if(i==1)
	{
		printf("    *    ");
	}
	else if(i==2)
	{
		printf("   ***   ");
	}
	else if(i==3)
	{
		printf("  *****  ");
	}
	else if(i==4)
	{
		printf(" ******* ");
	}

	else
	{
		printf("*********");
	}

		printf("\n");
	}
	getch();
}