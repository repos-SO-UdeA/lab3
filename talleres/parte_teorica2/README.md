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
   a. Declare a 10-element array of the indicated structure. Then, using individual member assignment (or the string equivalent), let the third element describe a Remarkatar lens with a focal length of 500 mm and an aperture of f/2.0.

**Answer**:

```C
LENS bigEye[10];
lensFormulas[2].foclen = 500;
lensFormulas[2].fstop = 2.0;
strcpy(lensFormulas[2].brand, "Remarkatar");
```

   b. Repeat part a., but use an initialization list with a designated initializer in the declaration rather than using separate assignment statements for each member.

**Answer**:

```C
LENS bigEye[10] = { [2] = {500, 2, "Remarkatar"} };
```

6. Consider the following programming fragment:

```C
struct name {
  char first[20];
  char last[20];
};

struct bem {
  int limbs;
  struct name title;
  char type[30];
};

struct bem * pb;
struct bem deb = {
                   6,
                   {"Berbnazel", "Gwolkapwolk"},
                   "Arcturan"
};

pb = &deb;
```
a. What would each of the following statements print?

```C
printf("%d\n", deb.limbs);
printf("%s\n", pb->type);
printf("%s\n", pb->type + 2);
```
**Answer**:

```
6
Arcturan
cturan
```

b. How could you represent "Gwolkapwolk" in structure notation (two ways)?

**Answer**:

```C
deb.title.last  // Using the variable (deb) struct bem
pb->title.last  // Using the pointer (pb) to the variable (deb) struct bem
```
c. Write a function that takes the address of a bem structure as its argument and prints the contents of that structure in the form shown here:

```
Berbnazel Gwolkapwolk is a 6-limbed Arcturan.
```

**Answer**:

```C

/* Declaration (or header) of the function */
void prbem (const struct bem * pbem );    // void prbem (const struct bem *);

/* Definition of the function */
void prbem (const struct bem * pbem ) {
  printf("%s %s is a %d-limbed %s.\n", pbem->title.first,
  pbem->title.last, pbem->limbs, pbem->type);
}
```

7. Consider the following declarations:

```C
struct fullname {
  char fname[20];
  char lname[20];
};
struct bard {
  struct fullname name;
  int born;
  int died;
};

struct bard willie;
struct bard *pt = &willie;
```
a. Identify the born member of the willie structure using the willie identifier.

**Answer**:

```C
willie.born
```

b. Identify the born member of the willie structure using the pt identifier.

**Answer**:

```C
pt->born
```

c. Use a scanf() call to read in a value for the born member using the willie identifier.

**Answer**:

```C
scanf("%d", &willie.born);
```

d. Use a scanf() call to read in a value for the born member using the pt identifier.

**Answer**:

```C
scanf("%d", &pt->born);
```

e. Use a scanf() call to read in a value for the lname member of the name member using the willie identifier.

**Answer**:

```C
scanf("%s", willie.name.lname);
```

f. Use a scanf() call to read in a value for the lname member of the name member using the pt identifier.

**Answer**:

```C
scanf("%s", pt->name.lname);
```

g. Construct an identifier for the third letter of the first name of someone described by the willie variable.

**Answer**:

```C
willie.name.fname[2]
```

h. Construct an expression representing the total number of letters in the first and last names of someone described by the willie variable.

**Answer**:

```C
strlen(willie.name.fname) + strlen(willie.name.lname)
```



