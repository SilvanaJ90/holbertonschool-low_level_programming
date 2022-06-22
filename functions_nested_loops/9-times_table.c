#include "main.h"
/**
 * times_table-check
 *
 * times_table --
 */

void times_table(void)

{

	int n;
	int t;
	int i;

		for (n = 0; n < 10; n++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (i = 1; i < 10; i++)
			{
				t = n * i;
				if ((t / 10) > 0)
				{
					_putchar((t / 10) + '0');
				}
				else
				{
					_putchar(' ');
				}
				_putchar((t % 10) + '0');

				if (i < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}

}
