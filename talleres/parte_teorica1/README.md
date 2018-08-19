# Taller resuelto de repaso de los conceptos vistos sobre vectores, matrices y apuntadores.

> **Objetivos**
> * Reforzar los conceptos teoricos tratados.
> * Comprender los aspectos claves relacionados con la sintaxis en lenguaje C relacionados con vectores, matrices y apuntadores. 
> * Ir ganando experiencia para la resolución de ejercicios empleando estas estructuras.

## Nota

Estos ejercicios son una transcripción al pie de la letra de algunas de las **review questions** del libro **C Primer Plus (6th Edition)** relacionados con los temas de interes para la presente sección. Para el caso se colocan los enunciados seguidos de las respuestas.

## solved review questions

1. What will this program print?

```C
#include <stdio.h>

int main(void) {
  int ref[] = {8, 4, 0, 2};
  int *ptr;
  int index;
  for (index = 0, ptr = ref; index < 4; index++, ptr++)
  printf("%d %d\n", ref[index], *ptr);
  return 0;
}
```

**Answer**:

```
8 8
4 4
0 0
2 2
```

2. What is the value of *ptr and of *(ptr + 2) in each case?

a. 
```C
int *ptr;
int torf[2][2] = {12, 14, 16};
ptr = torf[0];
```
**Answer**:
```
*ptr --> 12
*(ptr + 2) --> 16
```
b. 
```C
int * ptr;
int fort[2][2] = { {12}, {14,16} };
ptr = fort[0];
```

**Answer**:
```
*ptr --> 12
*(ptr + 2) --> 14
```

3. Suppose you have the following declaration:

```C
int grid[30][100];
```

a. Express the address of grid[22][56] one way.

**Answer**:

```
Forma 1: &grid[22][56]
```

b. Express the address of grid[22][0] two ways.

**Answer**:
```
Forma 1: &grid[22][0]
Forma 2: grid[22]
```

c. Express the address of grid[0][0] three ways.

**Answer**:
```
Forma 1: &grid[0][0]
Forma 2: grid[0]
Forma 3: (int *)grid
```

4. Create an appropriate declaration for each of the following variables:
a. digits is an array of 10 ints .

**Answer**:

```C
int digits[10];
```

b. rates is an array of six floats.

**Answer**:

```C
float rates[6];
```

c. mat is an array of three arrays of five integers.

**Answer**:

```C
int mat[3][5];
```

d. psa is an array of 20 pointers to char .

**Answer**:

```C
char *psa[20];
```

e. pstr is a pointer to an array of 20 chars .

**Answer**:

```C
char (*pstr)[20];
```

5. Create an appropriate declaration for each of the following variables:
a. Declare an array of six int s and initialize it to the values 1 , 2 , 4 , 8 , 16 , and 32 .

**Answer**:

```C
int s[6] =  {1, 2, 4, 8, 16, 32};
```

b. Use array notation to represent the third element (the one with the value 4 ) of the array in part a.

**Answer**:

```C
s[2];
```

c. Assuming C99/C11 rules are in effect, declare an array of 100 int s and initialize it so that the last element is -1 ; don’t worry about the other elements.

**Answer**:

```C
int s[100] = {99:-1}; <--> int s[100] = {[99] = -1};
```

d. Assuming C99/C11 rules are in effect, declare an array of 100 int s and initialize it so that elements 5, 10, 11, 12, and 3 are 101 ; don’t worry about the other elements.

**Answer**:

```C
// Forma 1
int s[100] = {[5] = 101, [10] = 101, [11] = 101, [12] = 101, [3] = 101};
// Forma 2
int s[100] = {[3] = 101, [5] = 101, [10] = 101, 101, 101};
```

6. Suppose you have these declarations:

```C
float rootbeer[10], things[10][5], *pf, value = 2.2;
int i = 3;
```

Identify each of the following statements as valid (V) or invalid (I):

a. ```C rootbeer[2] = value;```

**Answer**:

```
V
```

b. ```C scanf("%f", &rootbeer );```

**Answer**:

```
I
```

c. ```C rootbeer = value;```

**Answer**:

```
I
```

d. ```C printf("%f", rootbeer);```

**Answer**:

```
I
```

e. ```C things[4][4] = rootbeer[3];```

**Answer**:

```
V
```

f. ```C things[5] = rootbeer;```

**Answer**:

```
I
```

g. ```C pf = value;```

**Answer**:

```
I
```

h. ```C pf = rootbeer;```

**Answer**:

```
V
```

7. Declare an 800×600 array of int .

**Answer**:

```C
int A[800][600];
```


8. Here are three array declarations:

```C
double trots[20];
short clops[10][30];
long shots[5][10][15];
```

a. Show a function prototype and a function call for a traditional void function that processes trots and also for a C function using a VLA (Variable-Length Arrays).

**Answer**:

Function prototype and a function call for a traditional void function:

```C
// Prototype
void process(double array[], int t);
// Fuction Call
process(trops,20);
```

Function prototype and a function call for a C function using a VLA (Variable-Length Arrays):

```C
// Prototype
void processVLA(int t, double array[]);
// Fuction Call
processVLA(20, trops);
```

b. Show a function prototype and a function call for a traditional void function that processes clops and also for a C function using a VLA (Variable-Length Arrays).

**Answer**:

Function prototype and a function call for a traditional void function:

```C
// Prototype
void process(short array2D[30], int rows);
// Fuction Call
process(clops,10);
```

Function prototype and a function call for a C function using a VLA (Variable-Length Arrays):

```C
// Prototype
void processVLA(int rows, int cols, short array2D[rows][cols]);
// Fuction Call
processVLA(10, 30, clops);
```

c. Show a function prototype and a function call for a traditional void function that processes shots and also for a C function using a VLA (Variable-Length Arrays).

**Answer**:

Function prototype and a function call for a traditional void function:

```C
// Prototype
void process(short array3D[10][15], int rows);
// Fuction Call
process(shots,5);
```

Function prototype and a function call for a C function using a VLA (Variable-Length Arrays):

```C
// Prototype
void processVLA(int m, int n, int p, short array3D[m][n][p]);
// Fuction Call
processVLA(5, 10, 15, shots);
```

9. Here are two function prototypes:

```C
void show(const double ar[], int n);
// n is number of elements
void show2(const double ar2[][3], int n); // n is number of rows
```

a. Show a function call that passes a compound literal containing the values 8 , 3 , 9 , and 2 to the show() function.

**Answer**:

```C
// Forma normalita
double v[] = {8, 3, 9, 2};
show(v, 4);

// Forma no tan normalita
show( (int [4]) {8,3,9,2}, 4);
```

b. Show a function call that passes a compound literal containing the values 8 , 3 , and 9 as the first row and the values 5, 4, and 1 as the second row to the show2() function.

```C
// Forma normalita
double M[2][3] = { 
                   {8, 3, 9},
                   {5, 4, 1}
                 };
show(v, 2);

// Forma no tan normalita
show( (int [][3]) {{8, 3, 9},{5, 4, 1}}, 2);
```

