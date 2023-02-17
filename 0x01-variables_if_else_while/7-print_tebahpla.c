 #include <stdio.h>
/**
* main - is the if loop function
*
* Return: Success
*/

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar(10);
	return (0);
}
