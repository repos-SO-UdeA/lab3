/* Programming Exercise 10-11 */
#include <stdio.h>
#define ROWS 3
#define COLS 5

void times2(int ar[][COLS], int r);
void showarr2(int ar[][COLS], int r);


int main(void)
{
        int stuff[ROWS][COLS] = {
                {1,2,3,4,5},
                {6,7,8,-2,10},
                {11,12,13,14,15}
        };
        showarr2(stuff, ROWS);
        putchar('\n');
        times2(stuff, ROWS);
        showarr2(stuff, ROWS);
        return 0;
}


void times2(int ar[][COLS], int r)
{
        int row, col;
        for (row = 0; row < r; row++)
                for (col = 0; col < COLS; col++)
                        ar[row][col] *= 2;
}

void showarr2(int ar[][COLS], int r)
{
        int row, col;
        for (row = 0; row < r; row++)
        {
                for (col = 0; col < COLS; col++)
                        printf("%d ", ar[row][col]);
                putchar('\n');
        }
}
