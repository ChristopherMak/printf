#include "alx.h"

/**
 * _strlen - Afunct that returns the lenght of a string.
 * @s: The type char pointer.
 * Return: m.
 */

int _strlen(char *s)
{
	int m;

	for (m = 0; s[m] != 0; m++)
		;
	return (m);

}
/**
 * _strlenc - The strlen function applied to constant char pointer s.
 * @s: The type char pointer.
 * Return: m.
 */

int _strlenc(const char *s)
{
	int m;

	for (m = 0; s[m] != 0; m++)
		;
	return (m);
}
