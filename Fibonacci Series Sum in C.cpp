#include <stdio.h>

int fib(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return fib(n - 1) + fib(n - 2);
  }
}

int main() {
  int n, sum = 0;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  for (int i = 0; i <= n; i++) {
    int fibonacci = fib(i);
    sum += fibonacci;
  }
  printf("The sum of the Fibonacci series is %d\n", sum);
  return 0;
}

