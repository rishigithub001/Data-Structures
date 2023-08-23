#include <stdio.h>
#include <string.h>
int is_palindrome(char *str) 
{
  \* when a given string is actually a palindrome, returns with 0 else, returns 1.
  int n = strlen(str);
  int i, j;

  for (i = 0, j = n - 1; i < n / 2; i++, j--) {
    if (str[i] != str[j]) {
      return 0;
    }
  }

  return 1;
}
