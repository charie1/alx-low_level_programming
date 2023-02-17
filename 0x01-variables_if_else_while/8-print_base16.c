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

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}

	for (alp = 'a'; num <= 'f'; alp++)
	{
		putchar(alp);
	}

	putchar(10);
	return (0);
}
