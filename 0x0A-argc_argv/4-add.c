#include <stdio.h>
#include <stdlib.h>
/**
* main - takes the command line argument
* @argc: count the num of arguments passed
* @argv: the arrays of characters passed
*
* Return: 0 = success
*	  1 = error
**/

int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9'
			)
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
