#include <stdio.h>
/**
* main - is the if loop function
*
* Return: Success
*/

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar(10);
	return (0);
}
