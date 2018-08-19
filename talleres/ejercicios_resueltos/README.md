

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

2. Write a function that returns the largest value stored in an array-of- int . Test the function in a simple program.

**answer**: 

3. Write a function that returns the difference between the largest and smallest elements of an array-of- double . Test the function in a simple program.

**answer**: 

4. Write a program that declares a 3×5 array of int and initializes it to some values of your choice. Have the program print the values, double all the values, and then display the new values. Write a function to do the displaying and a second function to do the doubling. Have the functions take the array name and the number of rows as arguments.

**answer**: 

5. Write a program that prompts the user to enter three sets of five double numbers each.
(You may assume the user responds correctly and doesn’t enter non-numeric data.) The
program should accomplish all of the following:
   1. Store the information in a 3×5 array.
   2. Compute the average of each set of five values.
   3. Compute the average of all the values.
   4. Determine the largest value of the 15 values.
   5. Report the results.
Each major task should be handled by a separate function using the traditional C
approach to handling arrays. Accomplish task “b” by using a function that computes
and returns the average of a one-dimensional array; use a loop to call this function three
times. The other tasks should take the entire array as an argument, and the functions
performing tasks “c” and “d” should return the answer to the calling program.
