#include "main.h"
#include <stdlib.h>
/**
* str_concat - a function that concatenates two strings
* @s1: string s1
* @s2: string s2
* Return: success
**/

char *str_concat(char *s1, char *s2)
{
	char *concat_s1s2;
	int count;
	int concat_count = 0;
	int len = 0;

	if (s1 == NULL)
		return (" ");
	if (s2 == NULL)
		return (" ");

	for (count = 0; s1[count] || s2[count]; count++)
		len++;

	concat_s1s2 = malloc(len * sizeof(char));

	if (concat_s1s2 == NULL)
		return (NULL);

	for (count = 0; s1[count]; count++)
		concat_s1s2[concat_count++] = s1[count];
	for (count = 0; s2[count]; count++)
		concat_s1s2[concat_count++] = s2[count];

	return (concat_s1s2);
}
