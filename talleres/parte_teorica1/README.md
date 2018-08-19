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
b. Use array notation to represent the third element (the one with the value 4 ) of the
array in part a.
c. Assuming C99/C11 rules are in effect, declare an array of 100 int s and initialize it
so that the last element is -1 ; don’t worry about the other elements.
d. Assuming C99/C11 rules are in effect, declare an array of 100 int s and initialize
it so that elements 5, 10, 11, 12, and 3 are 101 ; don’t worry about the other
elements.

Rta: 
int s[6] =  {1, 2, 4, 8, 16, 32};
s[2];
int s[100] = {99:-1}; <--> int s[100] = {[99] = -1};
int s[100] = {[5] = 101, [10] = 101, [11] = 101, [12] = 101, [3] = 101}; <--> int s[100] = {[3] = 101, [5] = 101, [10] = 101, 101, 101};

9.
Suppose you have these declarations:
float rootbeer[10], things[10][5], *pf, value = 2.2;
int i = 3;
Identify each of the following statements as valid or invalid:
a. rootbeer[2] = value;
b. scanf("%f", &rootbeer );
c. rootbeer = value;
d. printf("%f", rootbeer);
e. things[4][4] = rootbeer[3];
f. things[5] = rootbeer;
g. pf = value;
h. pf = rootbeer;

Rta:
a. V
b. I
c. I
d. I
e. V
f. V --> I
g. I
h. V

10. Declare an 800×600 array of int .

int A[800][600];

11. 
Here are three array declarations:
double trots[20];
short clops[10][30];
long shots[5][10][15];
a. Show a function prototype and a function call for a traditional void function that
processes trots and also for a C function using a VLA.
b. Show a function prototype and a function call for a traditional void function that
processes clops and also for a C function using a VLA.
c. Show a function prototype and a function call for a traditional void function that
processes shots and also for a C function using a VLA.

Rta:

void process(double vec[], int tam); 
process(trots, 20);

void process(int cols, short M[][cols]); 
process(30, M);



12.
Here are two function prototypes:
void show(const double ar[], int n);
// n is number of elements
void show2(const double ar2[][3], int n); // n is number of rows
a. Show a function call that passes a compound literal containing the values 8 , 3 , 9 ,
and 2 to the show() function.
b. Show a function call that passes a compound literal containing the values 8 , 3 ,
and 9 as the first row and the values 5 , 4 , and 1 as the second row to the show2()
function.

***********************************************************************************************


