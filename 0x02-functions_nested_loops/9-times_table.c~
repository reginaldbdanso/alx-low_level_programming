#include "main.h"

/**
 * timestable - prints the 9 times table, starting with 0.
 *
 *
 *
 * Return:
 */

void times_table(void)
{
  int j;
  int i;
  int product;

  for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
	  {
             product = i * j;
            if (product > 99)
	      {
                _putchar('0' + product / 100);
            }
            if (product > 9)
	      {
                _putchar('0' + (product % 100) / 10);
            }
            _putchar('0' + product % 10);
	    _putchar(',');
_putchar(' ');
	    _putchar(' ');
        }
        _putchar('\n');
}
}
