#include<stdio.h>
#include<conio.h>
int factorial(int n)
{
if(n== 0)
{
return 1;
}
else
{
return n * factorial(n-1);
}
}
int main()
{
int n;
printf("Enter a number: ");
scanf("%d",&n);
int factorial= factorial(n);
printf("The factorial of %d is %d\n",n,factorial);
return 0;
}
