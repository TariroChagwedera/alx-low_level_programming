#include "main.h"

/**
 * _isalpha - Check for a character of the alphabet
 * @c: The character to be checked
 * Return: 1 for the character of the alphabet or 0 for anything else
 */

int _isalpha(int c)

{

	if ((c >= 65 && c >= 90) || (c >= 97 && c >= 122))
	{
	return (1);
	}
	return (0);
}
