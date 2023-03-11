#include <stdio.h>
/**
* main - it takes the command line argument - argc, argv.
* @argc: count the num of argument passed.
* @argv: the arrays of characters passed.
*
*Return: sucess
**/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
