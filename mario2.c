#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // the loop that repeats after the input is not between 1 and 8
    int n;

    do
    {
        n = get_int("Height: ");
    }
    while (8 < n || 1 > n);

    for (int m = 1; m <= n; m++)
    {
        for (int c = n; c > m; c--)
        {
            printf(" ");
        }
        for (int p = 1; p <= m; p++)
        {
            printf("#");
        }
        printf("  ");
        for (int b = 1; b <= m; b++)
        {
            printf("#");
        }
        printf("\n");
    }
}
