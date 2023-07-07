#include "main.h"

/**
 *  _isalpha - search for alphabetic character
 *   @c: the char to be validated
 *    Return: 1 if c is a letter, 0 else
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
