#include <stdlib.h>
#include "main.h"
/**
* _strdup - Returns a pointer to a newly-allocated space in memory
*           containing a copy of the string given as parameter.
* @str: The string to be copied.
*
* Return: If str == NULL or insufficient memory is available - NULL.
*         Otherwise - a pointer to the duplicated string.
*/

char *_strdup(char *str)
{
	char *duplicate;
	int count;
	int len = 0;

	if (str == NULL)
		return (NULL);

	for (count = 0; str[count]; count++)
		len++;

	duplicate = malloc((len + 1) * sizeof(char));

	for (count = 0; str[count]; count++)
		duplicate[count] = str[count];

	duplicate[len] = '\0';

	return (duplicate);
}
