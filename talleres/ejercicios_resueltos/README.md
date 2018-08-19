

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

5. **Description**: Write a program that prompts the user to enter three sets of five double numbers each.
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

Do Programming problem of the description using variable-length array function parameters. Design and test a function that fetches the next n characters from input (including blanks, tabs, and newlines), storing the results in an array whose address is passed as an argument.

**answer**: 

6. Design and test a function that fetches the next n characters from input (including blanks, tabs, and newlines), storing the results in an array whose address is passed as an argument.

**answer**: 

7. Design and test a function that reads the first word from a line of input into an array and discards the rest of the line. It should skip over leading whitespace. Define a word as a sequence of characters with no blanks, tabs, or newlines in it. Use getchar().

**answer**: 

8. Write a function called string_in() that takes two string pointers as arguments. If the second string is contained in the first string, have the function return the address at which the contained string begins. For instance, string_in("hats", "at") would return the address of the a in hats . Otherwise, have the function return the null pointer. Test the function in a complete program that uses a loop to provide input values for feeding to the function.

**answer**: 

9. Write a function that takes a string as an argument and removes the spaces from the string. Test it in a program that uses a loop to read lines until you enter an empty line. The program should apply the function to each input string and display the result.

**answer**: 

10. Write a program that reads input until end-of-file and echoes it to the display. Have the program recognize and implement the following command-line arguments:

```
-p Print input as is
-u Map input to all uppercase
-l Map input to all lowercase
```

Also, if there are no command-line arguments, let the program behave as if the –p argument had been used.

**answer**: 

11. Write a program that fits the following recipe:
    1. Externally define a name structure template with two members: a string to hold the first name and a string to hold the second name.
    2. Externally define a student structure template with three members: a name structure, a grade array to hold three floating-point scores, and a variable to hold the average of those three scores.
    3. Have the main() function declare an array of CSIZE (with CSIZE = 4 ) student structures and initialize the name portions to names of your choice. Use functions to perform the tasks described in parts iV., v., vi., and vii.
    4. Interactively acquire scores for each student by prompting the user with a student name and a request for scores. Place the scores in the grade array portion of the appropriate structure. The required looping can be done in main() or in the function, as you prefer.
    5. Calculate the average score value for each structure and assign it to the proper member.
    6. Print the information in each structure.
    7. Print the class average for each of the numeric structure members.

**answer**:

12.     
