#include <cs50.h>
#include <stdio.h>

void meow(int n);
int get_positive_int(void);

int main(void)
{
    int y = get_positive_int();
    meow(y);
}


















int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("How many meows do you want your cat to say ? ");
    }
    while (n < 1);
    return n;
}


void meow(int n)
{
    for(int i = 0; i < n; i++)
    printf("meow\n");
}
