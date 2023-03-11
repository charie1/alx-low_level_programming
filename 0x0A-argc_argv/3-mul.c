#include <stdio.h>
#include <stdlib.h>
/**
* main - takes the command line argument (argc, argv)
* @argc: count the number of arguments passed.
* @argv: takes the array of characters.
*
* Return: 0 = success
*	  1 = error
**/

int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 3)
	{
		printf("Error/n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);
	return (0);
}
