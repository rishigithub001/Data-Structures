#include <stdio.h>
#include <conio.h>
int main() 
{
int n, i, min, max, factorial_min, factorial_max;
printf("Enter the number of elements in the array: ");
scanf("%d", &n);
int array[n];
for (i = 0; i < n; i++) 
{
printf("Enter element %d: ", i + 1);
scanf("%d", &array[i]);
}
min = array[0];
max = array[0];
for (i = 1; i < n; i++) 
{
if (array[i] < min) 
{
min = array[i];
}
if (array[i] > max) 
{
max = array[i];
}
}
factorial_min = 1;
for (i = 1; i <= min; i++) 
{
factorial_min *= i;
}
factorial_max = 1;
for (i = 1; i <= max; i++) 
{
factorial_max *= i;
}
printf("The factorial of the minimum number is %d\n", factorial_min);
printf("The factorial of the maximum number is %d\n", factorial_max);
return 0;
}

