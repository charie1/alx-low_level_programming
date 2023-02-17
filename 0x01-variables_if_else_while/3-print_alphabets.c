 #include <stdio.h>
/**
*main - is the if loop function
*
* Return: Success
 */

int main(void)
{
	char alp_lower, alp_upper;

	for (alp_lower = 'a'; alp_lower <= 'z'; alp_lower++)
	{
		putchar(alp_lower);
	}
	for (alp_upper = 'A'; alp_upper <= 'Z'; alp_upper++)
	{
		putchar(alp_upper);
	}
	putchar(10);
	return (0);
}
