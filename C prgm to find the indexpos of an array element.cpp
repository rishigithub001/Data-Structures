#include <stdio.h>
int find_index(int arr[], int n, int element)
{
int i;
for (i = 0; i < n; i++) 
{
if (arr[i] == element) 
{
return i;
}
}
return -1;
}
int main() 
{
int arr[100];
int n;
int element;
printf("Enter the number of elements: ");
scanf("%d", &n);
printf("Enter the elements: ");
for (int i = 0; i < n; i++) 
{
scanf("%d", &arr[i]);
}
printf("Enter the element to search for: ");
scanf("%d", &element);
int index = find_index(arr, n, element);
if (index == -1) 
{
printf("Element not found\n");
} 
else 
{
printf("Element found at index: %d\n", index);
}
return 0;
}

