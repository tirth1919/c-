#include<stdio.h>
#include<conio.h>
main()
{
      int i;
      clrscr();
      printf("enter any number: ");
      scanf("%d",&i);
      while(i>=1)
      {
	if(i%2==1)
	{
		printf("%d ",i);
	}
	i--;
      }
      getch();
}
