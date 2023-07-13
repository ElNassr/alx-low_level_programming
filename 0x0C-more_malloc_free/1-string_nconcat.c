#include <stdio.h>
#include <stdlib.h>

 /**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: number of bytes from s2 to concatenate
  *
  * Return: a pointer to the concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;
	char *p;

	if (s1 != NULL)
	{
		while (*(s1 + i) != '\0')
		{
			i++;
		}
	}
	if (s2 != NULL)
	{
		while (*(s2 + j) != '\0')
		{
			j++;
		}
	}
	if (j >= n)
	{
		j = n;
	}
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (k = 0; k < i; k++)
		{
			*(p + k) = *(s1 + k);

		}
	}
	if (s2 != NULL)
	{
		for (k = 0; k < j; k++)
		{
			*(p + i + k) = *(s2 + k);
		}
	}
	*(p + i + j) = '\0';
	return (p);
}
