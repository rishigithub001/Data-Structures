#include <stdio.h>
int factorial(int n) 
{
if (n == 0) 
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
int n, i;
float sum = 0;
printf("Enter a positive integer: ");
scanf("%d", &n);
for (i = 1; i <= n; i++) 
{
sum += (float)factorial(i) / i;
}
printf("The sum of the series is: %.2f", sum);
return 0;
}
