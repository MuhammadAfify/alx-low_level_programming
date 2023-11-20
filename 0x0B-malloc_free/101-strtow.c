#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * word_length - Locates the index
 *
 * @str: The string to be searched.
 * Return: The index marking.
 */
int word_length(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}
/**
 * count_words - Counts the number of words
 *
 * @str: The string to be searched
 * Return: The number of words
 */
int count_words(char *str)
{
	int i = 0, word = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			word++;
			i += word_len(str + i);
		}
	}
	return (word);
}
/**
 * strtow - Splits a string into words.
 *
 * @str: The string to be split.
 * Return: If str = NULL, str = "", or the function fails - NULL.
 */
char **strtow(char *str)
{
	char **string;
	int index = 0, word, w, letter, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	word = count_words(str);
	if (word == 0)
		return (NULL);
	string = malloc(sizeof(char *) * (word + 1));
	if (string == NULL)
		return (NULL);
	for (w = 0; w < word; w++)
	{
		while (str[index] == ' ')
			index++;
		letter = word_length(str + index);
		string[w] = malloc(sizeof(char) * (letter + 1));
		if (string[w] == NULL)
		{
			for (; w >= 0; w--)
				free(string[w]);
			free(string);
			return (NULL);
		}
		for (l = 0; l < letter; l++)
			string[w][l] = str[index++];

		string[w][l] = '\0';
	}
	string[w] = NULL;
	return (string);
}
