#include<stdio.h>
#include<string.h>
int main()
{
char nstr[100];
printf("\nEnter a string to be reversed:");
scanf("%s",&nstr);
printf("\nThe reversed string is: %s",strrev(nstr));
return 0;
}
