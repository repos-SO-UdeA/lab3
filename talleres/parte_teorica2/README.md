# Taller resuelto de repaso de los conceptos vistos sobre estructuras.

> **Objetivos**
> * Reforzar los conceptos teoricos sobre estructuras tratados en la parte teorica.
> * Comprender los aspectos claves relacionados con la sintaxis en lenguaje C relacionados el manejo de estructuras. 
> * Ir ganando experiencia para la resolución de ejercicios empleando estas estructuras.

## Nota

Estos ejercicios son una transcripción al pie de la letra de algunas de las **review questions** del libro **C Primer Plus (6th Edition)** relacionados con los temas de interes para la presente sección. Para el caso se colocan los enunciados seguidos de las respuestas.

## solved review questions

1. Here is a portion of a program. What will it print?

```C
#include <stdio.h>

struct house {
  float sqft;
  int rooms;
  int stories;
  char address[40];
};

int main(void) {
  struct house fruzt = {1560.0, 6, 1, "22 Spiffo Road"};
  struct house *sign;
  sign = &fruzt;
  printf("%d %d\n", fruzt.rooms, sign->stories);
  printf("%s \n", fruzt.address);
  printf("%c %c\n", sign->address[3], fruzt.address[4]);
  return 0;
}
```

**Answer**:

```
6 1
22 Spiffo Road
S p
```
2. Devise a structure template that will hold the name of a month, a three-letter abbreviation for the month, the number of days in the month, and the month number.

**Answer**:

```C
struct month {
  char name[10];
  char abrev[4];
  int numDays;
  int numMonth;
};
```

3. Define an array of 12 structures of the sort in question 2 and initialize it for a non-leap year.

**Answer**:

```C
struct month months[12] =  {
                             {"January", "jan", 31, 1},
                             {"February", "feb", 28, 2},
                             {"March", "mar", 31, 3},
                             {"April", "apr", 30, 4},
                             {"May", "may", 31, 5},
                             {"June", "jun", 30, 6}
                             {"July", "jul", 31, 7},
                             {"August", "aug", 31, 8},
                             {"September", "sep", 30, 9},
                             {"October", "oct", 31, 10},
                             {"November", "nov", 30, 11},
                             {"December", "dec", 31, 12}
                           };
```

4. Write a function that, when given the month number, returns the total days in the year up to and including that month. Assume that the structure template of question 2 and an appropriate array of such structures are declared externally.

**Answer**:

```C

extern struct month months[];


int days(int month) {
  int index, total;
  if (month < 1 || month > 12)
    return(-1); /* error signal */
  else  {
    for (index = 0, total = 0; index < month; index ++)
      total += months[index].days;
    return(total);
  }
}
```
5. Given the following typedef:

```C
typedef struct lens {      /* lens descriptor */
  float foclen;            /* focal length,mm */
  float fstop;             /* aperture */
  char brand[30];          /* brand name */
} LENS;
```
   i. Declare a 10-element array of the indicated structure. Then, using individual member assignment (or the string equivalent), let the third element describe a Remarkatar lens with a focal length of 500 mm and an aperture of f/2.0.

**Answer**:

```C
LENS bigEye[10];
lensFormulas[2].foclen = 500;
lensFormulas[2].fstop = 2.0;
strcpy(lensFormulas[2].brand, "Remarkatar");
```

   ii. Repeat part a., but use an initialization list with a designated initializer in the declaration rather than using separate assignment statements for each member.

**Answer**:

```C
LENS bigEye[10] = { [2] = {500, 2, "Remarkatar"} };
```


