#include <stdio.h>
/**
* main - is the if loop function
*
* Return: Success
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar(10);
	return (0);
}
