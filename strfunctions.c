#include "header.h"

/**
 * _token - Function to split a string by token
 * @torray: array to save all tokens
 * Return: string divided by token to success
 */

char *_token(char *torray[])
{
	char *token = NULL;

	if (torray[0][0] == '/' || torray[0][0] == ' ')
	{
		if (torray[0][0] == ' ')
		{
			token = _string_directory(torray);
			return (token);
		}
		else
		{
			token = torray[0];
		}

	}
	else
	{
		token = _string_directory(torray);
	}
	return (token);
}

/**
 * _strdup - Function that duplicate an array
 * @str: string to duplicated
 * Return: duplicated string to succes or NULL from error
 */

char *_strdup(char *str)
{
	char *save_str;
	int index = 0, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	save_str = malloc(sizeof(char) * (len + 1));

	if (save_str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		save_str[index] = str[index];

	save_str[len] = '\0';

	return (save_str);
}

/**
 * _strcmp - to compare two string
 * @s1: value waited from the main
 * @s2: source to be compare
 * Return: 0 for same string o entry string
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0, j = 0;

	for (count = 0; s1[count] != '\0' && s2[count] != '\0'; count++)
	{
		if (s1[count] == s2[count])
			j = 0;
		else
			return (s1[count] - s2[count]);
	}
	return (j);
}
