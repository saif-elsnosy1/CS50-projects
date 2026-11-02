#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long temp;
    int position = 1;
    long card = get_long("Enter your credit number: ");
    temp = card;
    int sum = 0;
    do
    {
        int digit = temp % 10;
        temp = temp / 10;
        // take the num or leave it
        if (position % 2 == 0)
        {
            digit *= 2;
            if (digit <= 9)
            {
                sum += digit;
            }
            else if (digit > 9)
            {
                int n = digit % 10 + digit / 10;
                sum += n;
            }
        }
        else
        {
            sum += digit;
        }
        position++;
    }
    while (temp > 0);
    temp = card;
    while (temp > 99)
    {
        temp = temp / 10;
    }
    int first_two = temp;
    int first_one = temp / 10;
    if (sum % 10 == 0)
    {
        if ((first_two == 34 || first_two == 37) && position == 16)
        {
            printf("AMEX\n");
        }
        else if (position == 17 && first_two >= 51 && first_two <= 55)
        {
            printf("MASTERCARD\n");
        }
        else if ((position == 14 || position == 17) && first_one == 4)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}
