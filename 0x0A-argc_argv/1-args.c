#include <stdio.h>
/**
* main - tells the command line argument passed to it
* @argc: the first command line argument
* @argv: the secomd command line argument
*
* Return: success.
**/

int main(int argc, char __attribute__((__unused__)) * argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
