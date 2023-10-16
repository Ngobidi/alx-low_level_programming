#include "main.h"

/**
 * _isalpha - validates for alphabetic char
 * @c: the char to be validated
 * Return: 1 when c is a letter, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
