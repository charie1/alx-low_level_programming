#include "main.h"
/**
* jack_bauer - print every minute of the day
* Return: success(0)
*/

void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr <= 23; hr++)
	{
		_putchar((hr / 10) + '0');
		_putchar((hr % 10) + '0');

		for (min = 0; min <= 59; min++)
		{
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}

	return (0);
}
