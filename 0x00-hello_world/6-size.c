#include <stdio.h>
/**
* main - the sizeof data types
*
*Return: sucess
*/
int main(void)
{
	printf("size of a char: %c byte(s)\n", sizeof(char));
	printf("size of a int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lld byte(s)\n", sizeof(long long int));
	printf("size of a float: %f byte(s)\n", sizeof(float));
	return (0);
}
