#include <stdio.h>
#include <string.h>
int is_valid_string(char *str) 
  {
  int i;
  for (i = 0; str[i] != '\0'; i++) 
  {
    if (str[i] != ' ' && (str[i] < 'a' || str[i] > 'z')) 
	{
      return 0;
    }
  }
  return 1;
}
  int main() 
  {
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  if (is_valid_string(str)) 
  {
  printf("The string is valid.\n");
  } 
  else 
  {
  printf("The string is not valid.\n");
  }
return 0;
}

