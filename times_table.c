#include <stdio.h>

int main(void)
{
    int i, j;
    int product;
    
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            product = (i * j);
            
            if (product < 10)
            {
                putchar(' ');
                if (j == 9)
                {
                    putchar((product % 10) + '0');
                }
                else
                {
                    putchar((product % 10) + '0');
                    putchar(',');
                    putchar(' ');
                }
                
                continue;
                
            }
            
            if (product > 9)
            {
                putchar((product / 10) + '0');
            }
            
            if (j == 9)
            {
                putchar((product % 10) + '0');
            }
            else
            {
                putchar((product % 10) + '0');
                putchar(',');
                putchar(' ');
            }
        }
        putchar(10);
    }
    
    return (0);
}