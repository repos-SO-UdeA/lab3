/* Programming Exercise 10-5 */
#include <stdio.h>
#define LEN 10

double max_diff(const double ar[], int n);
void show_arr(const double ar[], int n);

int main(void)
{
        double orig[LEN] = {1.1,2,3,4,12,61.3,7,8,9,10};
        double max;
        show_arr(orig, LEN);
        max = max_diff(orig, LEN);
        printf("%g = maximum difference\n", max);
        return 0;
}

double max_diff(const double ar[], int n)
{
        int i;
        double max = ar[0];
        double min = ar[0];
        for (i = 1; i < n; i++)
        {
                if (max < ar[i])
                        max = ar[i];
                else if (min > ar[i])
                        min = ar[i];
        }
        return max - min;
}

void show_arr(const double ar[], int n)
{
        int i;
        for (i = 0; i < n; i++)
                printf("%g ", ar[i]);
        putchar('\n');
}
