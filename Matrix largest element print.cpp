#include <stdio.h>
int find_largest_element(int matrix[][10], int rows, int columns) 
{
int largest_element = matrix[0][0];
for (int i = 0; i < rows; i++) {
for (int j = 0; j < columns; j++) 
{
if (matrix[i][j] > largest_element) 
{
largest_element = matrix[i][j];
}
}
}
printf("The largest element in the matrix is %d\n", largest_element);
}
int main() 
{
int matrix[10][10];
int rows, columns;
printf("Enter the number of rows: ");
scanf("%d", &rows);
printf("Enter the number of columns: ");
scanf("%d", &columns);
for (int i = 0; i < rows; i++) 
{
for (int j = 0; j < columns; j++) 
{
printf("Enter the element at [%d][%d]: ", i, j);
scanf("%d", &matrix[i][j]);
}
}
find_largest_element(matrix, rows, columns);
return 0;
}

