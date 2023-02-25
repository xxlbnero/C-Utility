#include <stdio.h>

/**
 * num_digit - Function to return the number of digits in a given numer
 * using recursion
 * @n: digit to check
 * Return: Number of digits in n
 */

/* Prototype */
int num_digit(int n);

/* Main Program entry */
int main(void)
{
        int dig = 123456;
        
        printf("There (is)/are %d digits in %d\n", num_digit(dig), dig);
        return (0);
}


/* Function definition */
int num_digit(int n)
{
        if (n >=0 && n <= 9)
        {
                return (1);
        }
        else
        {
                while (n != 0)
                {
                        return (1 + num_digit(n / 10));
                }
        }
}