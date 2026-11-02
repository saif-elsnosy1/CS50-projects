#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // make the program repeat if the num is less than 1 or bigger than 10
    int i;
    do
    {
        // get the height
        i = get_int("Height: ");
    }
    while (8 < i || i < 1);
    // make the hashes
    for (int m = 1; m <= i; m++)
    {
        for (int p = i; p > m; p--)
        {
            printf(" ");
        }
        for (int j = 1; j <= m; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
