

1. The next code converts a decimal number to binary.

```C
/* binary.c -- prints integer in binary form */
#include <stdio.h>

void to_binary(unsigned long n);

int main(void) {
  unsigned long number;
  printf("Enter an integer (q to quit):\n");
  while (scanf("%lu", &number) == 1) {
    printf("Binary equivalent: ");
    to_binary(number);
    putchar('\n');
    printf("Enter an integer (q to quit):\n");
  }
  printf("Done.\n");
  return 0;
}

void to_binary(unsigned long n) {
  int r; /* recursive function */
  r = n % 2;
  if (n >= 2)
    to_binary(n / 2);
  putchar(r == 0 ? '0' : '1');
  return;
}
```

Generalize the to_binary() function of preceding code to a to_base_n() function that takes a second argument in the range 2–10. It then should print the number that is its
first argument to the number base given by the second argument. For example, to_base_n(129,8) would display 201 , the base-8 equivalent of 129 . Test the function in a
complete program.

**answer**: 
