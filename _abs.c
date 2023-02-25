#include <stdio.h>

int _abs(int n);

int main(void)
{
        int val;
        int num = -8837;

        val = _abs(num);

        printf("Absolute value of %d is %d\n", num, val);

        return (0);
}

/* Return the absolute value of a number using recursion */
int _abs(int n)
{
        if (n >= 0)
        {
                return (n);
        }
        return (1 + _abs(n+1));
}