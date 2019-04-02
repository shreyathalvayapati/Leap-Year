#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    int year = get_int("Please enter a year: ");

    if (year <= 0)
    {
        printf("\nPlease enter a year that is greater than zero.\n");
        return 0;
    }

    if ((year % 4) == 0)
    {
        printf("\nThe year you entered was a leap year!\n");
    }
    else
    {
        printf("\nThe year you entered was not a leap year.\n");
    }

    return 0;
}