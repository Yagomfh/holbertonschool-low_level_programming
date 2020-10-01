#include "holberton.h"
#include <stdio.h>

/**
* cap_string - capitalizes all words of a string
* @str: string to modify
*
* Returns: string with all words caps
*/

char *cap_string(char *str)
{
	int i = 0;
	char *result = str;

	while (str[i] != 0)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			if (i == 0)
			{
				str[i] = str[i] - 32;
				result[i] = str[i];
			}
			else if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t' || str[i - 1] == ',')
			{
				str[i] = str[i] - 32;
				result[i] = str[i];
			}
			else if (str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' || str[i - 1] == '?')
			{
				str[i] = str[i] - 32;
				result[i] = str[i];
			}
			else if (str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}')
			{
				str[i] = str[i] - 32;
				result[i] = str[i];
			}
			else
				result[i] = str[i];
		}
		i++;
	}
	return (result);
}
