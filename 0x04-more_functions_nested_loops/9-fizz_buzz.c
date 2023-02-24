#include <stdio.h>
/**
 * main - fizzbuzz
 *
 * Return: success (0)
 */

int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{
		if (num % 3 == 0)
			printf("fizz");

		else if (num % 5 == 0)
			printf("buzz");

		else if (num % 3 == 0 && num % 5 == 0)
			printf("fizzbuzz");

		else
			printf("%d", num);
		printf(" ");	
	}
	printf("\n");
	return (0);
}
