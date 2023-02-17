#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - is the if loop function
* Return: Success
* betty style doc for function main goes there
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positve", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	else
	{
		printf("error");
	}

	return (0);
}
