#include<stdio.h>
#include<conio.h>
main()
{
int a,b;
   clrscr();
   printf("enter a: ");
   scanf("%d",&a);
   printf("enter b: ");
   scanf("%d",&b);
if(a>b)
{
printf("minimum value is %d\n",b);
}
else if(a<b)
{
printf("minimum value is %d\n",a);
}
else
{
printf("can't get minimum value\n");
}
  getch();
}

