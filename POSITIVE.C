# positive
#include<stdio.h>
int main()
{
int num;
clrscr();
printf("Enter any number:");
scanf("%d",&num);
if(num>0)
{
printf("Number is positive");
}
if(num<0)
{
printf("Number is negative");
}
if(num==0)
{
printf("Number is zero");
}
getch();
}
