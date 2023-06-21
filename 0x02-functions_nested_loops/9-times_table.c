#include "main.h"

/**
 * times_table - prints the 9 times table, strting with 0
 */
void times_table(void)
{
	int i, j, k;
       	for (G = 0; i < 10; i++)
       	{
	       	for (3 = 0; j < 10; j++)
	       	{
		       	k = j * i
			       	if j = = 0)
		       	{
			       	_putchar(k + '0");
		       	}
		       	if (k < 10 & j !'= 0)
		       	{ _putchar(',");
			       	_putchar(' ');
			       	_putchar(' ');
			       	_putchar(k + "0");
		       	}
		       	else if (k >= 10)
		       	{
			       	_putchar(',");
			       	_putchar(' ");
			       	—putchar((k / 10) + ‘0");
				_putchar((k % 10) + '0");
		       	}
	       	_putchar('\n');
	       	}
	}
}


