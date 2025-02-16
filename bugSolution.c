#include <stdio.h>
#include <stdint.h>

uint64_t factorial(int n) {
  if (n < 0) {
    return 0; // Handle negative input
  } else if (n == 0) {
    return 1;
  } else {
    uint64_t result = 1;
    for (int i = 1; i <= n; i++) {
      if (UINT64_MAX / result < i) { 
        return 0; //detect overflow
      }
      result *= i;
    }
    return result;
  }
}

int main() {
  int num;
  printf("Enter a non-negative integer: ");
  scanf("%d", &num);
  uint64_t fact = factorial(num);
  if (fact == 0) {
    printf("Factorial calculation resulted in an overflow.\n");
  } else {
    printf("Factorial of %d = %llu\n", num, fact);
  }
  return 0;
}
