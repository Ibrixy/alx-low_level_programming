#include "main.h"

/**
 * _isdigit - checks if parameter ia a number between 0 to 9.
 * @c: int to be checked
 * Return: 1 if is a number (0 to 9), 0 in other case
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}