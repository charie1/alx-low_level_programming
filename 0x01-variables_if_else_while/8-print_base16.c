 #include <stdio.h>
/**
 * main - is the if loop function
 *
 * Return: Success
 */

int main(void)
{
	int num;
	char alp;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	for (alp = 'a'; num <= 'f'; alp++)
	{
		putchar(alp);
	}

	putchar(10);
	return (0);
}
