#include<stdio.h>
#include<conio.h>
int main()
{
int a, b;
printf("Enter any number:");
scanf("%d",&a);
if(a<0)
{
printf("Give a positive value!");
}
else
if(a%2== 0)
{
printf("The number is even!");
}
else
{
printf("The number is odd!");
}
return 0;
}
